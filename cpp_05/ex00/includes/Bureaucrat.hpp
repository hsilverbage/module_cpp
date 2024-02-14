#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat
{
	public :

		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat&	operator=(const Bureaucrat &rhs);

		unsigned int		getGrade() const;
		const std::string	getName() const;

		void	incrementGrade();
		void	decrementGrade();

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Grade too high);
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
		unsigned int		_grade;

};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &rhs)

#endif
