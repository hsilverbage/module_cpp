#ifndef	BITCOINEXCHANGE_HPP
#define	BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cctype>
#include <sstream>

#define DATE_ERR "Error : wrong date format -> \"YYYY-MM-DD | <value>\""
#define	VALUE_ERR "Error : wrong rate exchange, valid value must be either a float or a positive integer, between 0 and 1000 -> \"YYYY-MM-DD | <value>\""

class BitcoinExchange
{
	public :

		BitcoinExchange(std::string file);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &rhs);
		BitcoinExchange&	operator=(const BitcoinExchange &rhs);

		void	exchange();
		bool	parse_line(std::string line);

		class	OpenException : public std::exception
		{
			const char* what() const throw();
		};

	private:

		const std::string			_input;
		std::map<std::string, int>	_inputContainer;
		std::map<std::string, int>	_dataContainer;
};

#endif
