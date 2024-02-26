#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error : wrong number of arguments" << std::endl;
		return (-1);
	}
	try
	{
		BitcoinExchange	Bitcoin(argv[1]);

		Bitcoin.exchange();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
