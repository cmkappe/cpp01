/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chiarakappe <chiarakappe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:05:36 by chiarakappe       #+#    #+#             */
/*   Updated: 2025/11/09 16:55:23 by chiarakappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------

Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie::~Zombie(){
	std::cout << _name << " has been destroyed." << std::endl;
}

// -----------------------------------------------------
// *** MEMBER FUNCTION ***
// -----------------------------------------------------
void	Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
