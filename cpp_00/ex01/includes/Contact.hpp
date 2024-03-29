#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
	public:
		Contact();
		~Contact();
		void	addContact();
		void	printContact(int j);
		void	printContactInfo();
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif

