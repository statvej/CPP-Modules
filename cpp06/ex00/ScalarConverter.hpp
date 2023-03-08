
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>


enum type
{
	isINT,
	isCHAR,
	isFLOAT,
	isDOUBLE,
	isSPECIAL_F,
	isSPECIAL_D,
	isILLEGAL,
};

class ScalarConverter
{
private:
	std::string inputToConvert;
	int inputType;

	void convertFromInt();
	void convertFromChar();
	void convertFromFloat();
	void convertFromDouble();
public:
	ScalarConverter(/* args */);
	ScalarConverter(std::string input);
	ScalarConverter(ScalarConverter const &);
	ScalarConverter &operator=(ScalarConverter const &);
	~ScalarConverter();

	char _c;
	int _i;
	float _f;
	double _d;

	void makeConversions();
	void setInputType();
	void display();

	class UnknownTypeException: public std::exception
	{
	public:
		const char* what() const throw ()
		{
			return "Unknown type used as input\n";
		}
	};

};




#endif