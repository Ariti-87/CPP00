#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

std::string Contact::getFirstName() const
{
	return m_first;
}

std::string Contact::getLastName() const
{
	return m_last;
}

std::string Contact::getNickname() const
{
	return m_nick;
}

std::string Contact::getNumber() const
{
	return m_num;
}

std::string Contact::getDarkestSecret() const
{
	return m_dark;
}

void Contact::setFirstName(std::string const& str)
{
	m_first = str;
}

void Contact::setLastName(std::string const& str)
{
	m_last = str;
}

void Contact::setNickname(std::string const& str)
{
	m_nick = str;
}

void Contact::setNumber(std::string const& str)
{
	m_num = str;
}

void Contact::setDarkestSecret(std::string const& str)
{
	m_dark = str;
}

