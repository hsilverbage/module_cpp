#include <iostream>

int	main (void)
{
	std::string	s = "HI THIS IS BRAIN";
	std::string	*s_ptr = &s;
	std::string	&s_ref = s;

	std::cout << "The memory address of the string variable : " << &s << std::endl;
	std::cout << "The memory address held by stringPTR : " << &s_ptr << std::endl;
	std::cout << "The memory address held by stringREF : " << &s_ref << std::endl;

	std::cout << "The value of the string variable : " << s << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *s_ptr << std::endl;
	std::cout << "The value pointed to by stringREF : " << s_ref << std::endl;

	return (0);
}
