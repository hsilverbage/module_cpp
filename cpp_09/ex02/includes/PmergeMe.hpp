#ifndef	PMERGEME_HPP
#define	PMERGEME_HPP

#include <iostream>
#include <climits>
#include <vector>
#include <deque>
#include <cstdlib>
#include <sstream>
#include <cmath> 
#include <ctime>
#include <iomanip>


class	PmergeMe
{
	public :

		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &rhs);
		PmergeMe&	operator=(const PmergeMe &rhs);

		void	sort_vector();
		void	sort_deque();
		bool	parsing(char** argv);

	private :

		std::vector<unsigned int>	_vector;
		std::deque<unsigned int>	_deque;

};

#endif
