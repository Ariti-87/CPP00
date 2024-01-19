#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook
{
	public:

	Phonebook();
	~Phonebook();
	void add();
	void search();
	void print(Contact contact);

	private:

	Contact m_contact[8];
	int m_index;
};

std::string changeString(std::string const str);

#endif
