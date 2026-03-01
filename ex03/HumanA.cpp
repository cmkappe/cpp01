#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &w) : name(name), weapon(w){}
HumanA::~HumanA(){}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
