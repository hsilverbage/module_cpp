#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Johnny("Johnny", 0);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << "\n\n" << std::endl;
	}

	try
	{
		Bureaucrat	Tom("Tom", 1);

		std::cout << Tom;

		Tom.incrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << "\n\n" << std::endl;
	}

	try
	{
		Bureaucrat	Bob("Bob", 149);

		std::cout << Bob;
		Bob.decrementGrade();
		std::cout << Bob;
		Bob.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
