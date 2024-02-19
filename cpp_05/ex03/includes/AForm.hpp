#ifndef	AFORM_HPP
#define	AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	public :

		AForm(const std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
		virtual ~AForm();
		AForm(const AForm &rhs);
		AForm&	operator=(const AForm &rhs);

		const std::string	getName() const;
		const unsigned int	getGradeToSign() const;
		const unsigned int	getGradeToExec() const;
		bool				getSigned() const;
		void				beSigned(Bureaucrat &src);
		virtual bool				execute(Bureaucrat const& executor) const = 0;

		class	GradeTooHighException
		{
			public :
				virtual const char* what() const throw();
		};

		class	GradeTooLowException
		{
			public :
				virtual const char* what() const throw();
		};

		class NotSignedException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

	protected :

		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeToSign;
		const unsigned int	_gradeToExec;
		std::string			_target;
};

std::ostream&	operator<<(std::ostream& os, const AForm &rhs);

#endif
