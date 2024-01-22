#include <Contact.hpp>

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	check_if_empty(std::string &str)
{
	if (!str.empty())
		return;
	else
	{
		bool	valid = false;
		do
		{
			std::cout << "A contact can’t have empty fields, try again :" << std::endl;
			std::getline(std::cin, str);
			if (!str.empty())
				valid = true;
		}
		while (!valid);
	}
}

void	Contact::addContact()
{
	std::cout << "Enter your fisrt name :" << std::endl;
	std::getline(std::cin, _first_name);
	check_if_empty(_first_name);
	std::cout << "Enter your last name :" << std::endl;
	std::getline(std::cin, _last_name);
	check_if_empty(_last_name);
	std::cout << "Enter your nickname :" << std::endl;
	std::getline(std::cin, _nickname);
	check_if_empty(_nickname);
	std::cout << "Enter your phone number :" << std::endl;
	std::getline(std::cin, _phone_number);
	check_if_empty(_phone_number);
	std::cout << "Enter your darkest secret :" << std::endl;
	std::getline(std::cin, _darkest_secret);
	check_if_empty(_darkest_secret);
	std::cout << "Contact saved" << std::endl;
}

std::string	truncate_string(const std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::printContact(int j)
{
	std::cout << std::setw(10) << j + 1 << "|";
	std::cout << std::setw(10) << truncate_string(_first_name) << "|";
	std::cout << std::setw(10) << truncate_string(_last_name) << "|";
	std::cout << std::setw(10) << truncate_string(_nickname) << "|";
	std::cout << std::endl;
}

void	Contact::printContactInfo()
{
	std::cout << '\n'<< "First name : " << "\t\t" << _first_name << std::endl;
	std::cout << "Last name : " << "\t\t" << _last_name << std::endl;
	std::cout << "Nickname : " << "\t\t" << _nickname << std::endl;
	std::cout << "Phone number : " << "\t\t" << _phone_number << std::endl;
	std::cout << "Darkest secret : " << "\t" << _darkest_secret << '\n' << std::endl;
}
