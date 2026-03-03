/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:03:59 by ckappe            #+#    #+#             */
/*   Updated: 2025/11/09 17:36:01 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main ()
{
	Zombie *z = newZombie("Heap_____"); // allocated on heap, lives until we delete it
    z->announce();
    delete z; // free the heap memory (no automatic cleanup)

    randomChump("___Stack"); // returns immediately, stack object is destroyed automatically
}
