/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 19:55:08 by ckappe            #+#    #+#             */
/*   Updated: 2026/03/03 19:59:28 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------

// Constructor: initialize weapon type
Weapon::Weapon(const std::string &type) : type(type){}

// Destructor: nothing to clean up
Weapon::~Weapon(){}


// -----------------------------------------------------
// *** MEMBER FUNCTIONS ***
// -----------------------------------------------------

// Returns a constant reference to the weapon type (prevents modification)
const std::string& Weapon::getType() const
{
	return type;
}

// Sets a new weapon type
void Weapon::setType(const std::string &newType)
{
	type = newType;
}
