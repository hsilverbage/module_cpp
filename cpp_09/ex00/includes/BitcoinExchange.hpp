#ifndef	BITCOINEXCHANGE_HPP
#define	BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cctype>

class BitcoinExchange
{
	public :

		BitcoinExchange(std::string file);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &rhs);
		BitcoinExchange&	operator=(const BitcoinExchange &rhs);

		void	exchange();
		bool	parse_input(std::ifstream& input);

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
