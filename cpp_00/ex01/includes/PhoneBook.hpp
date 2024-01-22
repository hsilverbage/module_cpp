#ifndef	PHONEBOOK_CONTACT_HPP
# define PHONEBOOK_CONTACT_HPP

#include <Contact.hpp>
#include <iomanip>

class	PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		Contact	contacts[8];
		void	searchCommand();
	private:
};

# endif
