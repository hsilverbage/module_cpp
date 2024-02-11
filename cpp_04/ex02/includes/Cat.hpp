#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public :

		Cat();
		~Cat();
		Cat(const Cat &rhs);
		Cat&	operator=(const Cat &rhs);

		virtual void	makeSound() const;
		void			setIdea(size_t index, std::string idea);
		std::string		getIdea(size_t index) const;
		void			showAllIdeas(void) const;

	private :

		Brain*		_Brain;
};

#endif
