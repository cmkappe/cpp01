/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 19:55:25 by ckappe            #+#    #+#             */
/*   Updated: 2026/03/03 19:55:34 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------

// Constructor: HumanB starts with no weapon (nullptr)
HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr){}

// Destructor: nothing to delete (weapon is a pointer to external object, not owned by HumanB)
HumanB::~HumanB(){}


// -----------------------------------------------------
// *** MEMBER FUNCTIONS ***
// -----------------------------------------------------

// Assign a weapon to HumanB later (can change weapons)
void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;  // Store the address of the weapon
}

// HumanB attacks if they have a weapon, otherwise nothing happens
void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
