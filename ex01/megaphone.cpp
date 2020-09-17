#include <iostream>
#include <iomanip>
#include "index.h"

std::string truncate(std::string text){
	if (text.length() > 10){
		return text.substr(0,8) + ".";
	}
	return text;
}

int main(void){

	bool	continue_flag = true;
	std::string	input;
	
	Contact Contacts[8];

	while (continue_flag) {

		std::cout << "> ";
		std::getline( std::cin, input );


		if (input == "EXIT"){
			break;
		}
		else if (input == "ADD"){
			if (Contact::index < 8)
			{

			std::cout << "Please enter your first name: ";
			std::getline( std::cin, Contacts[Contact::index].firstName );
			std::cout << "Please enter your last name: ";
			std::getline( std::cin, Contacts[Contact::index].lastName );
			// std::cout << "Please enter your nickname: ";
			// std::cin >> Contacts[Contact::index].nickName;
			// std::cout << "Please enter your login: ";
			// std::cin >> Contacts[Contact::index].login;
			// std::cout << "Please enter your postal address: ";
			// std::cin >> Contacts[Contact::index].postlalAddress;
			// std::cout << "Please enter your email address: ";
			// std::cin >> Contacts[Contact::index].email;
			// std::cout << "Please enter your phone number: ";
			// std::cin >> Contacts[Contact::index].phoneNumber;
			// std::cout << "Please enter your favrite meal: ";
			// std::cin >> Contacts[Contact::index].favoriteMeal;
			// std::cout << "Please enter your underwearcolor: ";
			// std::cin >> Contacts[Contact::index].underwearColor;
			// std::cout << "Please enter your darkest secret: ";
			// std::cin >> Contacts[Contact::index].darkestSecret;
			Contact::index++;
			}
			else {
				std::cout << "Your agenda is full" << std::endl;
			}
		}
		else if (input == "SEARCH"){
			int i = 0;
			std::cout << std::setw(10) << "number" << "|";
			std::cout << std::setw(10) << "first name" << "|";
			std::cout << std::setw(10) << "last name" << "|";
			std::cout << std::setw(10) << "nickname" << std::endl;
			while (i < Contact::index){
				std::cout << std::setw(10) << i+1 << "|";
				std::cout << std::setw(10) << truncate(Contacts[i].firstName) << "|";

				std::cout << std::setw(10) << truncate(Contacts[i].lastName)<< "|";
				std::cout << std::setw(10) << truncate(Contacts[i].nickName) << std::endl;
				i++;
			}
			
		}

		else {
			std::cout << "command not recognized. Please use ADD/SEARH/EXIT command." << std::endl;
		}

	}
	 
	return 0;
}