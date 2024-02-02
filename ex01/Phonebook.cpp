#include "Phonebook.hpp"

Phonebook::Phonebook() : m_index(0)
{}

Phonebook::~Phonebook()
{}

void Phonebook::add()
{
	std::string str;

	str = "";
	while (str == "")
	{
		std::cout << "Enter your first name" << std::endl;
		if(!getline(std::cin, str))
			exit (1);
		if (str != "")
			m_contact[m_index].setFirstName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter your last name" << std::endl;
		if(!getline(std::cin, str))
			exit (1);
		if (str != "")
			m_contact[m_index].setLastName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter your nickname" << std::endl;
		if(!getline(std::cin, str))
			exit (1);
		if (str != "")
			m_contact[m_index].setNickname(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter your number" << std::endl;
		if(!getline(std::cin, str))
			exit (1);
		if (str != "")
			m_contact[m_index].setNumber(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter your darkest secret" << std::endl;
		if(!getline(std::cin, str))
			exit (1);
		if (str != "")
			m_contact[m_index].setDarkestSecret(str);
	}
	m_index++;
	if (m_index == 8)
		m_index = 0;
}

std::string Phonebook::changeString(std::string const str)
{
	std::string sz = str;

	if (sz.size() > 10)
	{
		sz.resize(9);
		sz.resize(10, '.');
	}
	// else if (sz.size() < 10)
	// {
	// 	sz.resize(10, ' ');
	// }
	return (sz);
}


void Phonebook::print(Contact contact)
{
	std::cout << "First Name : " << contact.getFirstName() << std::endl;
	std::cout << "Last Name : " << contact.getLastName() << std::endl;
	std::cout << "Nickname : " << contact.getNickname() << std::endl;
	std::cout << "Number : " << contact.getNumber() << std::endl;
	std::cout << "Darkest Secret : " << contact.getDarkestSecret() << std::endl;
}

void Phonebook::search()
{
	int i(1);
	std::string str("");

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	while (i <= 8 && m_contact[i - 1].getFirstName() != "")
	{
		std::cout << "|" << std::setw(5) << i << std::setw(6);
		std::cout << '|' << std::setw(10) << changeString(m_contact[i - 1].getFirstName());
		std::cout << '|' << std::setw(10) << changeString(m_contact[i - 1].getLastName());
		std::cout << '|' << std::setw(10) << changeString(m_contact[i - 1].getNickname()) << '|' << std::endl;
		i++;
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl << std::endl;
	while (str == "")
	{
		std::cout << "Enter an index for more information : " << std::endl;
		if(!getline(std::cin, str))
			exit (1);
		if (str.size() == 1 && str[0] >= '1' && str[0] <= '8')
		{
			if(m_contact[str[0] - 1 - '0'].getFirstName() != "")
				print(m_contact[str[0] - 1 - '0']);
			else
				std::cout << "Contact no registered yet" << std::endl;
		}
		else
			std::cout << "Index non existant" << std::endl;
	}
	std::cout << std::endl;
}
