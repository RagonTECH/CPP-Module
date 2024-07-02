#include "PhoneBook.hpp"
#include "contact.hpp"

int main()
{
	phonebook book;
	contact con;
	while(1)
	{
		std::string ad;
		std::cout << "Please enter a commond : ADD / SEARCH / EXIT : ";
		std::cin >> ad;
		if(ad == "ADD")
		{
			std::string name;
			std::cout << "please enter your name : " ;
			std::cin >> name;
			std::string surname;
			std::cout << "please enter your surname : " ;
			std::cin >> surname;
			std::string nickname;
			std::cout << "please enter your nickname : " ;
			std::cin >> nickname;
			std::string number;
			std::cout << "please enter your number : " ;
			std::cin >> number;
			std::string darkestSecret;
			std::cout << "please enter your darkest secret : " ;
			std::cin >> darkestSecret;
			con.set_all(name, surname, nickname, number, darkestSecret);
			std::cout << "*****SAVED SUCCESSFULLY*****" << std::endl;
		}
		if(ad == "SEARCH")
		{
				int nemo;
				con.get_allname();
				std::cout << "please enter name :";
				std::cin >> nemo;
				if(con.get_name(nemo) != "")
				{
					std::cout << "NAME: " << con.get_name(nemo)<< std::endl;
					std::cout << "SURNAME: " << con.get_surname() << std::endl;
					std::cout << "NICKNAME: " << con.get_nickname()<< std::endl;
					std::cout << "NUMBER: " << con.get_number()<< std::endl;
					std::cout << "DARKSET SECRET: " << con.get_darkestSecret()<< std::endl;
				}
				else
					std::cout << "bulunamadi" << std::endl;
		}
		if(ad == "EXIT")
		{
			exit(0);
		}
		if(ad != "ADD" && ad != "SEARCH" && ad != "EXIT")
		{
			std::cout << "please enter a commond" << std::endl;
		}
	}
}