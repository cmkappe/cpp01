/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chiarakappe <chiarakappe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:03:59 by chiarakappe       #+#    #+#             */
/*   Updated: 2025/11/09 17:36:01 by chiarakappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main (){
	Zombie *z = newZombie("Heap_____"); // allocated on heap
    z->announce();
    delete z; // must delete manually

    randomChump("___Stack"); // allocated on stack, auto-destroyed
}