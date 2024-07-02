#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class phonebook{
private:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string number;
	std::string darkestSecret;
public:
	phonebook();
	phonebook(std::string name, std::string surname, std::string nickname, std::string number, std::string darkestSecret);
	
	void set_all(std::string name1, std::string surname1, std::string nickname1, std::string number1, std::string darkestSecret1);

	std::string get_name() const { return name; }
	std::string get_surname() const { return surname; }
	std::string get_nickname() const { return nickname; }
	std::string get_number() const { return number; }
	std::string get_darkestSecret() const {return darkestSecret; }
};



#endif