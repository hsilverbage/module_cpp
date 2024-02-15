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
		virtual	bool		execute(Bureaucrat const& executor) const = 0;
		bool				checkIfExecutable(Bureaucrat const& executor) const;

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

		class NotSignedException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Impossible to execute the form because its not signed yet");
				}
		};

		class FileNotFundException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Impossible to sign or execute because the form doesnt exist");
				}
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
