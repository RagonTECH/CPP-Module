#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
private:
	void (Harl::*funcPtr)();
public:
  void debug( void );
  void info( void );
  void warning( void );
  void error( void );
  void complain(std::string level);
};

#endif