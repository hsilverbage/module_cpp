/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:23:51 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 13:33:07 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "FileReplacer.hpp"

int	main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error : 3 parameters excepted" << std::endl;
		return (-1);
	}

	FileReplacer	fileReplacer(argv[1]);

	fileReplacer.replaceFile(argv[2], argv[3]);

	return (0);
}
