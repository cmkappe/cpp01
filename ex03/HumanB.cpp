#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}

void HumanB::attack() const
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}