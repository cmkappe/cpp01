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

int main (){
	int N = 5;
    Zombie* horde = zombieHorde(N, "kgfofo");

    for (int i = 0; i < N; i++)
        horde[i].announce();

    delete[] horde;
    return 0;
}