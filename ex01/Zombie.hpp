#pragma once

#include <string>
#include <iostream>

class	Zombie
{
	private:
	std::string	_name;


	public:
		Zombie();
		Zombie(const std::string &name);

		Zombie operator=(const Zombie& other);

		~Zombie();

	void announce( void );
	void	setName(std::string &name);

};

Zombie* zombieHorde( int N, std::string name );


