/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:43:02 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/04 09:48:15 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	//std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact()
{
	//std::cout << "Contact deconstructor called" << std::endl;
}

void	Contact::setFirstName(std::string& value)
{
	this->_firstName = value;
}

void	Contact::setLastName(std::string& value)
{
	this->_lastName = value;
}

void	Contact::setNickname(std::string& value)
{
	this->_nickname = value;
}

void	Contact::setPhoneNumber(std::string& value)
{
	this->_phoneNumber = value;
}

void	Contact::setSecret(std::string& value)
{
	this->_secret = value;
}

void	Contact::setId(int id)
{
	this->_id = id;
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

int Contact::getId() const
{
	return (this->_id);
}
