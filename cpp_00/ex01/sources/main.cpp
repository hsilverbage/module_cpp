#include <iostream>
#include <PhoneBook.hpp>

int	main (void)
{
	PhoneBook	phonebook;
	std::string	command;
	int			i = 0;

	do
	{
		std::cout << "Enter command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			phonebook.contacts[i].addContact();
			i++;
			if (i == 8)
				i = 0;
		}
		else if (command == "SEARCH")
			phonebook.searchCommand();
		else if (command != "EXIT")
			std::cout << "Unknown command" << std::endl;
	}
	while (command!= "EXIT");

	return (0);
}

/*
• EXIT
◦ Le programme quitte et les contacts sont perdus à jamais !
*/

