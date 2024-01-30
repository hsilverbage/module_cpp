/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:57:25 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 13:57:26 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : 1 argument excepted" << std::endl;
		return (-1);
	}

	Harl	harl;

	harl.complain(argv[1]);

	return (0);
}
