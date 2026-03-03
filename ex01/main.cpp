/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chiarakappe <chiarakappe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:03:59 by chiarakappe       #+#    #+#             */
/*   Updated: 2025/11/09 18:59:49 by chiarakappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main ()
{
	int n = 5;
    // create n zombies on heap with same name
    Zombie* horde = zombieHorde(n, "Guenther");

	if (!horde)
	{
		std::cout << "Invalid number of zombies!" << std::endl;
		return 1;
	}

    for (int i = 0; i < n; i++)  // make each one speak
        horde[i].announce();

    delete[] horde; // clean up the array, destructor will run for each element
    return 0;
}