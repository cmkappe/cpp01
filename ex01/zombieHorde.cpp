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

Zombie* zombieHorde(int N, std::string name ){

	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return horde;
}