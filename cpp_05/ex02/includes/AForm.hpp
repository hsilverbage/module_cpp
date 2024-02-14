#ifndef	AForm_HPP
#define	AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	public :

		AForm();
		virtual ~AForm();
		AForm(const AForm &rhs);
		AForm&	operator=(const AForm &rhs);

		const std::string	getName() const;
		const unsigned int	getGradeToSign() const;
		const unsigned int	getGradeToExec() const;
		bool				getSigned() const;
		virtual void		beSigned(Bureaucrat &src) = 0;

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

	protected :

		std::string		_name;
		bool			_signed;
		unsigned int	_gradeToSign;
		unsigned int	_gradeToExec;
};

std::ostream&	operator<<(std::ostream& os, const AForm &rhs);

#endif
