#pragma once

#include <iostream>

class Harl
{
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:
	Harl(std::string &level);
	~Harl();

	void complain(std::string level);

};
