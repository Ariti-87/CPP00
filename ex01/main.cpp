#include <iostream>
#include <string>
#include "Contact.hpp"
#include "Phonebook.hpp"

// int	main(void)
// {
// 	Phonebook phone;
// 	std::string	str;

// 	while (1)
// 	{
// 		std::cout << "Enter a command : ADD, SEARCH or EXIT" << std::endl ;
// 		if (!std::getline(std::cin, str))
// 			return (1);
// 		else if (str == "ADD")
// 			phone.add();
// 		else if (str == "SEARCH")
// 			phone.search();
// 		else if (str == "EXIT")
// 			return (0);
// 		else
// 			// std::cout << "Invalid command" << std::endl ;
// 			continue;
// 	}
// }


int	main(void)
{
	Phonebook phone;
	std::string	str;

	while (1)
	{
		std::cout << "Enter a command : ADD, SEARCH or EXIT" << std::endl ;
		if (std::getline(std::cin, str))
		{
			if (str == "ADD")
				phone.add();
			else if (str == "SEARCH")
				phone.search();
			else if (str == "EXIT")
				return (0);
			else
				// std::cout << "Invalid command" << std::endl ;
				continue;
		}
		else
			return 1;
	}
}

