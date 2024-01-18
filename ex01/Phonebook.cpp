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
		getline(std::cin, str);
		if (str != "")
			m_contact[m_index].setFirstName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter your last name" << std::endl;
		getline(std::cin, str);
		if (str != "")
			m_contact[m_index].setLastName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter your nickname" << std::endl;
		getline(std::cin, str);
		if (str != "")
			m_contact[m_index].setNickname(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter your number" << std::endl;
		getline(std::cin, str);
		if (str != "")
			m_contact[m_index].setNumber(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Enter your darkest secret" << std::endl;
		getline(std::cin, str);
		if (str != "")
			m_contact[m_index].setDarkestSecret(str);
	}
	m_index++;
	if (m_index == 8)
		m_index = 0;
}
void Phonebook::search()
{
	// int len(10);
	int i(1);

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	while (i == m_index)
	{
		std::cout << "|" << i << "         |" << m_contact->getFirstName() << std::endl;
		i++;
	}
	std::cout << std::endl;
}

// int addSpace(std::string str)
// {

// }

void changeString(std::string str)
{
	// unsigned sz = str.size();
	if (str.size() > 10)
		str.resize(9, '.');
}

