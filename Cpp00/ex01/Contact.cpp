#include "contact.hpp"

contact::contact()
{
}

void contact::set_all(std::string name, std::string surname, std::string nickname, std::string number, std::string darkestSecret)
{
    book[i].set_all(name, surname, nickname, number, darkestSecret);
    i++;
    if(i == 9)
        i = 1;
}

void contact::get_allname()
{
    t = 1;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << std::setw(1) <<"Index |";
    std::cout << std::setw(1) <<"Name      |";
    std::cout << std::setw(1) <<"Surame    |";
    std::cout << std::setw(1) <<"Nickname\n";
    while(t < 9)
    {
        std::cout << std::setw(6) << std::left << t << "|";
        std::cout << std::setw(10) << std::left << (book[t].get_name().length() > 10 ? book[t].get_name().substr(0, 9) + "." :book[t].get_name());
        std::cout << "|";
        std::cout << std::setw(10) << std::left << (book[t].get_surname().length() > 10 ? book[t].get_surname().substr(0, 9) + "." :book[t].get_surname());
        std::cout << "|";
        std::cout << std::setw(10) << std::left << (book[t].get_nickname().length() > 10 ? book[t].get_nickname().substr(0, 9) + "." :book[t].get_nickname());
        std::cout << std::endl;
        t++;
    }
    std::cout << "---------------------------------------" << std::endl;;
}

inline std::string contact::get_name(int name)
{
    j = name;
    return (book[j].get_name());
}