#include "Phonebook.hpp"

int	main(void)
{
	Phonebook phone;
	std::string	str;

	while (1)
	{
		std::cout << "Enter a command : ADD, SEARCH or EXIT" << std::endl ;
		getline(std::cin, str);
		if (str == "ADD")
			phone.add();
		else if (str == "SEARCH")
			phone.search();
		else if (str == "EXIT")
			return (0);
		else
			std::cout << "Invalid command" << std::endl ;
		}
}
