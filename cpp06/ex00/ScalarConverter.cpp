#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */)
{
}

ScalarConverter::ScalarConverter(std::string input)
	: inputToConvert(input)
{
	this->setInputType();
	this->makeConversions();
}


ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other){
	this->inputToConvert = other.inputToConvert;
	this->setInputType();
	this->makeConversions();
	return *this;
}

ScalarConverter::ScalarConverter(ScalarConverter const &other){
	*this = other;
}

bool checkForDigits(std::string const& str) {
	for (size_t i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i]))
			return true;
	}
	return false;
}

int checkForSpecialTypes(std::string str) {
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return isSPECIAL_F;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return isSPECIAL_D;
	return -1;
}

void ScalarConverter::setInputType() {
	inputType = checkForSpecialTypes(inputToConvert);
	if (inputType != -1)
		return;
	bool digitFlag = checkForDigits(inputToConvert);
	if (inputToConvert.find('.') != std::string::npos && inputToConvert.size() > 1 && digitFlag)
	{
		if (inputToConvert.find('f') != std::string::npos)
			inputType = isFLOAT;
		else
			inputType = isDOUBLE;
	}
	else if (digitFlag)
		inputType = isINT;
	else if (inputToConvert.size() == 1)
		inputType = isCHAR;
	else
		inputType = isILLEGAL;
}


void ScalarConverter::convertFromInt(){
	this->_i = stoi(this->inputToConvert);
	this->_d = static_cast<double>(this->_i);
	this->_f = static_cast<float>(this->_i);
	this->_c = static_cast<char>(this->_i);
}
void ScalarConverter::convertFromChar(){
	this->_c = this->inputToConvert[0];
	this->_f = static_cast<float>(this->_c);
	this->_i = static_cast<int>(this->_c);
	this->_d = static_cast<double>(this->_c);
}
void ScalarConverter::convertFromFloat(){
	this->_f = stof(this->inputToConvert);
	this->_d = static_cast<double>(this->_f);
	this->_i = static_cast<int>(this->_f);
	this->_c = static_cast<char>(this->_f);
}
void ScalarConverter::convertFromDouble(){
	this->_d = stod(this->inputToConvert);
	this->_f = static_cast<float>(this->_d);
	this->_i = static_cast<int>(this->_d);
	this->_c = static_cast<char>(this->_d);
}


void ScalarConverter::makeConversions() {
	switch (inputType)
	{
	case isCHAR:
		convertFromChar();
		break;
	case isINT:
		convertFromInt();
		break;
	case isDOUBLE:
		convertFromDouble();
		break;
    case isSPECIAL_D:
		convertFromDouble();
		break;
	case isFLOAT:
		convertFromFloat();
		break;
    case isSPECIAL_F:
		convertFromFloat();
		break;
	default:
		break;
	}
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::display(void)
{
	////Not a valid number
	if (this->inputType == isILLEGAL)
	{
		std::cout << "Integer : " << "impossible" << std::endl;
		std::cout << "Char    : " << "impossible" << std::endl;
		std::cout << "Double  : " << "impossible" << std::endl;
		std::cout << "FLoat   : " << "impossible" << std::endl;
		return ;
	}
	
	////Integer
	if (this->_f < INT32_MIN || this->_f >= INT32_MAX || this->inputType == isSPECIAL_D || this->inputType == isSPECIAL_F)
		std::cout << "Integer : " << "impossible" << std::endl;
	else
		std::cout << "Integer : " << this->_i << std::endl;
	
	////Character
	if (this->_f < 0 || this->_f >= 255 || this->inputType == isSPECIAL_D || this->inputType == isSPECIAL_F)
		std::cout << "Char    : " << "impossible" << std::endl;
	else if (this->_c < 32 || this->_c >= 127)
		std::cout << "Char    : not displayable" << std::endl;
	else
		std::cout << "Char    : '" << this->_c << "'"<< std::endl;
	
	////Double and Float
	std::cout << "Double  : " << this->_d << (static_cast<bool>(fmod(this->_d, 1)) ? "" : ".0") << std::endl;
	std::cout << "Float   : " << this->_f << (static_cast<bool>(fmod(this->_f, 1)) ? "f" : ".0f") <<std::endl;
}
