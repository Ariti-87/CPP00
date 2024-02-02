#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class Phonebook
{
	public:

	Phonebook();
	~Phonebook();
	void add();
	void search();
	void print(Contact contact);
	std::string changeString(std::string const str);

	private:

	Contact m_contact[8];
	int m_index;
};


#endif
