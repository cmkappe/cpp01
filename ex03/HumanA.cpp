/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 19:52:53 by ckappe            #+#    #+#             */
/*   Updated: 2026/03/03 19:56:05 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------

// Constructor: HumanA always has a weapon (reference, passed at construction)
HumanA::HumanA(const std::string &name, Weapon &w) : name(name), weapon(w){}

// Destructor: nothing to delete (weapon is a reference, not owned by HumanA)
HumanA::~HumanA(){}


// -----------------------------------------------------
// *** MEMBER FUNCTIONS ***
// -----------------------------------------------------

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
