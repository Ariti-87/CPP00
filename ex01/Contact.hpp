#ifndef DEF_CONTACT
#define DEF_CONTACT

#include <iostream>

class Contact
{
	public:

	Contact();
	~Contact();
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getNumber() const;
	std::string getDarkestSecret() const;
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickname(std::string str);
	void setNumber(std::string str);
	void setDarkestSecret(std::string str);
	void printContact() const;

	private:

	std::string m_first;
	std::string m_last;
	std::string m_nick;
	std::string m_num;
	std::string m_dark;

};

#endif
