#include "PhoneBook.hpp"

phonebook::phonebook()
{
}

phonebook::phonebook(std::string name, std::string surname, std::string nickname, std::string number, std::string darkestSecret)
{
	this->name = name;
    this->surname = surname;
    this->nickname = nickname;
    this->number = number;
}

inline void phonebook::set_all(std::string name1, std::string surname1, std::string nickname1, std::string number1, std::string darkestSecret1)
{
	name = name1;
	surname = surname1;
	nickname = nickname1;
	number = number1;
	darkestSecret = darkestSecret1;
}