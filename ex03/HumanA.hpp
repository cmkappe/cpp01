#pragma once

# include "Weapon.hpp"

#include <string>

class HumanA
{
	private:
	std::string	name;
	Weapon&		weapon;

	public:
	HumanA(const std::string &name, Weapon &w);
	~HumanA();
	
	void attack() const;
};
