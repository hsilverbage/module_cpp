#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class	Form;

class	Bureaucrat
{
	public :

		Bureaucrat(std::string name, size_t grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat&	operator=(const Bureaucrat &rhs);

		size_t		getGrade() const;
		const std::string	getName() const;

		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form& src);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}

		};

	private :

		const std::string	_name;
		size_t		_grade;

};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &rhs);

#endif
