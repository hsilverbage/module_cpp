#ifndef SCALARCONVERTER_HPP
#define	SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>

enum
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SCIENCE
};

class ScalarConverter
{
	public :

		ScalarConverter(std::string arg);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &rhs);
		ScalarConverter&	operator=(const ScalarConverter &rhs);

		bool	parsing();
		int		getType() const;
		std::string	getArg() const;
		void	convert() const;

		class	InvalidInput : public std::exception
		{
			public :
				const char*	what() const throw();
		};

	private :

		int			_type;
		std::string	_arg;
		bool		_sign;

		void	convertChar() const;
		void	convertInt() const;
		void	convertFloat() const;
		void	convertDouble() const;
		void	convertScience() const;
};

#endif
