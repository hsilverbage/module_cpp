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

		void makeSound() const override;

	private :

		std::string	_name;
		Brain*		_Brain;
};

#endif
