#ifndef	PMERGEME_HPP
#define	PMERGEME_HPP

class	PmergeMe
{
	public :

		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &rhs);
		PmergeMe&	operator=(const PmergeMe &rhs)

		void	sort_vector();
		void	sort_list();
		bool	parsing();

	private :

		std::vector<unsigned int>	_vector;
		std::list<unsigned int>		_list;
};

#endif
