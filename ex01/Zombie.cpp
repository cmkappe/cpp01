/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:05:36 by ckappe            #+#    #+#             */
/*   Updated: 2025/11/09 18:26:06 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------

Zombie::Zombie() {}

Zombie::~Zombie(){
	// destructor prints when instance goes out of scope or is deleted
	std::cout << _name << " has been destroyed." << std::endl;
}

// -----------------------------------------------------
// *** MEMBER FUNCTIONS ***
// -----------------------------------------------------

void	Zombie::setName(std::string &name){_name = name;}

void	Zombie::announce( void ){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
