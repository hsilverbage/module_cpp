#ifndef	BRAIN_HPP
#define	BRAIN_HPP

#include "iostream"

class	Brain {

	public :

		Brain();
		~Brain();
		Brain(const Brain &rhs);
		Brain&	operator=(const Brain &rhs);

		void		setIdea(size_t index, std::string idea);
		std::string	getIdea(size_t index) const;

	private :

		std::string	_ideas[100];
};

#endif
