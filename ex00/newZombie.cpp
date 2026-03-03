/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:48:05 by ckappe            #+#    #+#             */
/*   Updated: 2025/11/09 17:24:50 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* newZombie( std::string name )
{
	// create object on the *heap* so it survives after function returns
	Zombie *z = new Zombie(name);
	return z;             // caller is responsible for delete
}

/* Then, implement the following two functions:
• Zombie* newZombie( std::string name );
This function creates a zombie, names it, and returns it so you can use it outside
of the function scope.

Now, what is the actual point of the exercise? You have to determine in which case
it is better to allocate zombies on the stack or the heap. */