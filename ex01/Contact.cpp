#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << "Contact deconstructor called" << std::endl;
	return ;
}

void	Contact::setFirstName(std::string value)
{
	this->_firstName = value;
}

void	Contact::setLastName(std::string value)
{
	this->_lastName = value;
}

void	Contact::setNickname(std::string value)
{
	this->_nickname = value;
}

void	Contact::setPhoneNumber(std::string value)
{
	this->_phoneNumber = value;
}

void	Contact::setSecret(std::string value)
{
	this->_secret = value;
}

std::string	Contact::getFirstName() const
{
	return (this->_firstName);
}

std::string	Contact::getLastName() const
{
	return (this->_lastName);
}

std::string Contact::getNickname() const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

std::string	Contact::getSecret() const
{
	return (this->_secret);
}