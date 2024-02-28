#ifndef	RPN_HPP
#define	RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class	RPN
{
	public :

		RPN(std::string arg);
		~RPN();
		RPN(const RPN &rhs);
		RPN&	operator=(const RPN &rhs);

		void	calculator();
		bool	parsing();

	private :

		std::string			_arg;
		std::stack<long>	_stack;
};

#endif
