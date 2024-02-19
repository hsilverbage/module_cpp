#include "ScalarConverter.hpp"
#include "Exceptions.hpp"

int main (int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw WrongNbArg();
		std::string	arg = argv[1];
		if (arg.empty())
			throw EmptyArg();
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
