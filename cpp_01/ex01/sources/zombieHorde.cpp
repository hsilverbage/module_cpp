/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:28:07 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 16:37:28 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1)
		return (NULL);
	Zombie	*Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		Horde[i].setName(name);
	return (Horde);
}
