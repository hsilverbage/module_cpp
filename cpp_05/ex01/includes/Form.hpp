#ifndef	FORM_HPP
#define	FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public :

		Form(const std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
		~Form();
		Form(const Form &rhs);
		Form&	operator=(const Form &rhs);

		const std::string	getName() const;
		const unsigned int	getGradeToSign() const;
		const unsigned int	getGradeToExec() const;
		bool				getSigned() const;
		void				beSigned(Bureaucrat &src);

		class	GradeTooHighException
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}

		};

		class	GradeTooLowException
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};

	private :

		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeToSign;
		const unsigned int	_gradeToExec;
};

std::ostream&	operator<<(std::ostream& os, const Form &rhs);

#endif
