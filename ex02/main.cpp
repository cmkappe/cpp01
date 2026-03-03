/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chiarakappe <chiarakappe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:39:46 by chiarakappe       #+#    #+#             */
/*   Updated: 2026/03/01 20:14:22 by chiarakappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;    // pointer stores the address of brain
	std::string	&stringREF = brain;     // reference is an alias for brain

	// Print memory addresses
	std::cout << &brain << std::endl;       // address of brain
	std::cout << stringPTR << std::endl;    // address stored in pointer
	std::cout << &stringREF << std::endl;   // address of reference (same as brain)

	// Print values
	std::cout << brain << std::endl;        // value of brain
	std::cout << *stringPTR << std::endl;   // dereference pointer to get value
	std::cout << stringREF << std::endl;    // reference acts like the original

	return 0;
}
