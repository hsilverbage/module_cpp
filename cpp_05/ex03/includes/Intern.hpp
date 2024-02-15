#ifndef	INTERN_HPP
#define	INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;
class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class	Intern
{
	public :

		Intern();
		~Intern();
		Intern(const Intern& rhs);
		Intern& operator=(const Intern& rhs);

		AForm*	makeForm(std::string name, std::string target);

		class	FileNotFundException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("The Intern can't find the file name asked by the bureaucrat and gives up");
				}
		};

	private :

		std::string	_files[3];
};

#endif
