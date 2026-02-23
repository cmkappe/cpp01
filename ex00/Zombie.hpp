#pragma once

#include <string>
#include <iostream>

class	Zombie
{
	private:
	std::string	_name;


	public:
		Zombie(const std::string &name);
		~Zombie();

	void announce( void );
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );


