/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 02:08:19 by chiarakappe       #+#    #+#             */
/*   Updated: 2026/03/03 21:08:38 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// -----------------------------------------------------
// *** CONSTRUCTOR & DESTRUCTOR ***
// -----------------------------------------------------
Harl::Harl(){}

Harl::~Harl(){}

// -----------------------------------------------------
// *** MEMBER FUNCTIONS ***
// -----------------------------------------------------

void Harl::debug(void){
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
			"ketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn't put "
		"enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for "
		"years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void){
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
	// Array of pointers to member functions
	// complaintFunc = pointer to a Harl member function returning void and taking no parameters
	typedef void (Harl::*complaintFunc)(void);
	complaintFunc funcs[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	// Array of level names (parallel to funcs array)
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	// Find the matching level and call the corresponding function
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			// Call member function through pointer: (this->*funcs[i])()
			(this->*funcs[i])();
			return;
		}
	}

	// If level not found, print error
	std::cout << "[INVALID] \"" << level << "\" is not a valid complaint level." << std::endl;
}
