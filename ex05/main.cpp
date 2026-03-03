/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 02:08:23 by chiarakappe       #+#    #+#             */
/*   Updated: 2026/03/03 20:56:22 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "===== TEST 1: All valid levels ====="  << std::endl;
	std::cout << "\nComplaining at DEBUG level:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nComplaining at INFO level:" << std::endl;
	harl.complain("INFO");

	std::cout << "\nComplaining at WARNING level:" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nComplaining at ERROR level:" << std::endl;
	harl.complain("ERROR");

    
    
	std::cout << "\n===== TEST 2: Invalid levels ====="  << std::endl;
	std::cout << "\nTrying invalid level 'UNKNOWN':" << std::endl;
	harl.complain("UNKNOWN");

	std::cout << "\nTrying lowercase 'debug':" << std::endl;
	harl.complain("debug");

	std::cout << "\nTrying empty string:" << std::endl;
	harl.complain("");


    
	std::cout << "\n===== TEST 3: Multiple instances ====="  << std::endl;
	Harl harl2;
	std::cout << "\nHarl2 complaining at WARNING:" << std::endl;
	harl2.complain("WARNING");

	std::cout << "\nHarl (original) complaining at ERROR:" << std::endl;
	harl.complain("ERROR");

	return (0);
}