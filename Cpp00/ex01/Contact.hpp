#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include "phonebook.hpp"

class contact{
private:
    phonebook book[9];
    int i = 1;
    int j = 1;
    int t = 1;

public:
    contact();
    contact(std::string name, std::string surname, std::string nickname, std::string number, std::string darkestSecret);

    void set_all(std::string name1, std::string surname1, std::string nickname1, std::string number1, std::string darkestSecret1);

    void get_allname();
    std::string get_name(int name);
    std::string get_surname() const {return book[j].get_surname();}
    std::string get_nickname() const {return book[j].get_nickname();}
    std::string get_number() const {return book[j].get_number();}
    std::string get_darkestSecret() const {return book[j].get_darkestSecret();}
};


#endif
