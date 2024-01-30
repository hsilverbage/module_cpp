/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:27:44 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 13:27:45 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		void announce();
		Zombie	*zombieHorde( int N, std::string name );
	private:
		std::string	_name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif
