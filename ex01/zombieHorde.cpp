/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chiarakappe <chiarakappe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:44:20 by chiarakappe       #+#    #+#             */
/*   Updated: 2025/11/09 18:29:56 by chiarakappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	if (n <= 0)
		return NULL;
	
	Zombie* horde = new Zombie[n]; // allocates an array of n Zombies on the heap
	
	for (int i = 0; i < n; i++) // give each the same name
		horde[i].setName(name);

	return horde;
}	

	// -> caller must delete[] the returned pointer
