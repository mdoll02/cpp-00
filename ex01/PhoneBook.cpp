/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:43:17 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/04 11:03:12 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook()
{
	//std::cout << "PhoneBook constructor called" << std::endl;
	//return ;
}

PhoneBook::~PhoneBook()
{
	//std::cout << "PhoneBook deconstructor called" << std::endl;
	//return ;
}

void	PhoneBook::setContact(std::string *contact_info)
{
	int i = 0;

	while (i < 8)
	{
		if (contacts[i].getFirstName().empty())
			break;
		else
			i++;
	}
	contacts[i].setFirstName(contact_info[0]);
	contacts[i].setLastName(contact_info[1]);
	contacts[i].setNickname(contact_info[2]);
	contacts[i].setPhoneNumber(contact_info[3]);
	contacts[i].setSecret(contact_info[4]);
	contacts[i].setId(i);
}

int	PhoneBook::addContact()
{
	std::string	contact_info[5];

	std::cout << "Please enter a first name: ";
	std::getline(std::cin, contact_info[0]);
	if (contact_info[0].empty())
		return (1);

	std::cout << "Please enter a last name: ";
	std::getline(std::cin, contact_info[1]);
	if (contact_info[1].empty())
		return (1);

	std::cout << "Please enter a nickname : ";
	std::getline(std::cin, contact_info[2]);
	if (contact_info[2].empty())
		return (1);

	std::cout << "Please enter a phone number: ";
	std::getline(std::cin, contact_info[3]);
	if (contact_info[3].empty())
		return (1);

	std::cout << "Please enter dark secret 😈: ";
	std::getline(std::cin, contact_info[4]);
	if (contact_info[4].empty())
		return (1);

	PhoneBook::setContact(contact_info);

	return (0);
}

void PhoneBook::searchContacts() const
{
	
}

