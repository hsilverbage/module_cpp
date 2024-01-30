/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:24:04 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 13:24:05 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>

int	main (void)
{
	Zombie	zombie1("bar");
	zombie1.announce();

	Zombie	*zombie2 = newZombie("foo");
	zombie2->announce();

	delete zombie2;

	randomChump("baz");
	return (0);
}
