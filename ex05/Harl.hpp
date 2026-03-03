#pragma once

#include <iostream>
#include <string>

class Harl
{
	private:
	// Typedef for pointer to member function
	typedef void (Harl::*complaintFunc)(void);

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:
	Harl();
	~Harl();

	void complain(std::string level);

};
