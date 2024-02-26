#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
	public :

		Span(unsigned int n);
		~Span();
		Span(const Span &rhs);
		Span&	operator=(const Span &rhs);

		void			addNumber(int nb);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		const int&		getNumber(unsigned int i) const;

		void			addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

		class	LessThanTwoElem : public std::exception
		{
			public :
				const char* what() const throw();
		};

		class	TooManyElem : public std::exception
		{
			public :
				const char* what() const throw();
		};

	private :

		unsigned int		_n;
		std::vector<int>	_array;

};

#endif
