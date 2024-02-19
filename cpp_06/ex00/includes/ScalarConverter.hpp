#ifndef SCALARCONVERTER_HPP
#define	SCALARCONVERTER_HPP

#include <iostream>

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
		void	convertToChar() const;
		void	convertToInt() const;
		void	convertToFloat() const;
		void	convertToDouble() const;
		void	printResult() const;

		class	InvalidInput : public std::exception
		{
			public :
				const char*	what() const throw();
		};

	private :

		int			_type;
		std::string	_arg;
		bool		_sign;
};

#endif
