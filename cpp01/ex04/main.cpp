#include <iostream>
#include <string>
#include <fstream>

std::string get_file_content(std::ifstream& file) {
	std::string str;
	std::string buf;

	while (file.good())
	{
		std::getline(file, buf);
		str += buf += "\n";
	}
	return str;
}

void substr_replace_with(std::string& str, const std::string& replace, const std::string& with)
{
	int index;

	while ((index = str.find(replace)) != (int)std::string::npos) {
		str.erase(index, replace.length());
		str.insert(index, with);
	}
}

void putDataToFile(std::string file_name, std::string data) {
	file_name += ".replace";
	std::ofstream outfile(file_name);
	outfile << data;
}

int main(int ac, char* av[]) {
	try {
		if (ac != 4)
			throw 1;
		std::string file_name = av[1];
		std::string replace(av[2]);
		std::string with(av[3]);
		if (file_name.empty() || replace.empty() || with.empty())
			throw 3;
		std::ifstream in_file(file_name);
		if (!in_file.is_open())
			throw 2;
		std::string contents = get_file_content(in_file);
		substr_replace_with(contents, replace, with);
		putDataToFile(file_name, contents);
	}
	catch (int i) {
		std::cerr << "ERROR_CODE : " << i << std::endl;
	}
}