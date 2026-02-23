/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chiarakappe <chiarakappe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:05:36 by chiarakappe       #+#    #+#             */
/*   Updated: 2025/11/09 18:26:06 by chiarakappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void	Zombie::setName(std::string &name){_name = name;}

Zombie::Zombie() {};

Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie Zombie::operator=(const Zombie& other) {
	if (this != &other) {
		this->_name = other._name;
	}
	return *this;
}

Zombie::~Zombie(){
	std::cout << _name << " has been destroyed." << std::endl;
}

void	Zombie::announce( void ){
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}