/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:48:10 by ckappe            #+#    #+#             */
/*   Updated: 2025/11/09 17:47:00 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void randomChump( std::string name )
{	
	Zombie z(name); // creates object on the stack, gonna be destroyed when the function ends
	z.announce();
}		// <-- z is destroyed here by automatically calling destructor




/* Then, implement the following two functions:

• void randomChump( std::string name );

This function creates a zombie, names it, and makes it announce itself.
Now, what is the actual point of the exercise? You have to determine in which case
it is better to allocate zombies on the stack or the heap. */
