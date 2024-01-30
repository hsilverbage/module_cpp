/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:30:28 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 13:30:29 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
