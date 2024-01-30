/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:28:37 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 16:41:12 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main (void)
{
	Zombie	*Horde = zombieHorde(10, "GANG");

	if (!Horde)
		return (0);
	for (int i = 0; i < 10; i++)
		Horde[i].announce();

	delete [] Horde;

	return (0);
}
