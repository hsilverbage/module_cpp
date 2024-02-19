#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error : wrong number of argument" << std::endl;
		return (-1);
	}
	std::string	arg = argv[1];
	if (arg.empty())
	{
		std::cerr << "Error : the argument is empty" << std::endl;
		return (-1);
	}
	try
	{
		ScalarConverter	Converter(arg);

		Converter.parsing();
		Converter.printResult();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
