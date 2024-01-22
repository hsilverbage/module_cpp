#include <PhoneBook.hpp>

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::searchCommand()
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;

	for (int j = 0; j < 8; j++)
	{
		PhoneBook::contacts[j].printContact(j);
		std::cout << "--------------------------------------------\n";
	}
	int	index;
	std::cout << "Enter index number to see extra info : ";
	std::cin >> index;
	if (index >= 1 && index <= 8)
		PhoneBook::contacts[index - 1].printContactInfo();
	else
		std::cout << "Wrong index" << std::endl;
	std::cin.ignore();
}
