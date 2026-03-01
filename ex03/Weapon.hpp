#pragma once

# include <string>
# include <iostream>

class Weapon
{
	private:
	std::string	type;

	public:
	Weapon(const std::string &type);
	~Weapon();

	const std::string& getType() const;
	void setType(const std::string &newType);
};


/* Implement a Weapon class that has:
• A private attribute type, which is a string.
• A getType() member function that returns a constant reference to type.
• A setType() member function that sets type using the new value passed as a pa-
rameter. */