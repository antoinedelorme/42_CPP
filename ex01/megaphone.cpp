#include <iostream>
#include <iomanip>
#include "index.h"



int main(void){

	bool	continue_flag = true;
	std::string	input;
	
	Contact Contacts[8];

	while (continue_flag) {

		std::cout << "> ";
		std::cin >> input;


		if (input == "EXIT"){
			break;
		}
		else if (input == "ADD"){
			// std::cout << Contact::index;
			break;
			
		}
		else if (input == "SEARCH"){
			break;
			
		}

		else {
			std::cout << "command not recognized. Please use ADD/SEARH/EXIT command." << std::endl;
		}

	}
	 
	return 0;
}