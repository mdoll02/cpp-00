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
#include <iomanip>
#include <string>
#include <ostream>
#include <cstdlib>

PhoneBook::PhoneBook()
{
	//std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	//std::cout << "PhoneBook deconstructor called" << std::endl;
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
	if (i == 8)
	{
		std::rotate(contacts, contacts + 1, contacts + 8);
		i = 7;
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
	int	i = 0;
	std::string	contact_info[5];
	std::string	prompts[5] = {
		"Please enter a first name: ",
		"Please enter a last name: ",
		"Please enter a nickname : ",
		"Please enter a phone number: ",
		"Please enter dark secret 😈: "};

	while (i < 5)
	{
		std::cout << prompts[i];
		std::getline(std::cin, contact_info[i]);
		if (contact_info[0].empty())
		{
			std::cout << "Contact info cant be empty!" << std::endl;
			return (1);
		}
		i++;
	}
	PhoneBook::setContact(contact_info);
	return (0);
}

std::string	PhoneBook::getSizedString(std::string string) const //TODO get solution without substr
{
	if (string.length() <= 10)
		return (string);
	string = string.substr(0, 8);
	string.append(".");
	return (string);
}

void	PhoneBook::printColumn(Contact contact) const
{
	std::cout << "|" << std::setw(9) <<  contact.getId();
	std::cout << "|" << std::setw(10);
	std::cout << getSizedString(contact.getFirstName());
	std::cout << "|" << std::setw(10);;
	std::cout << getSizedString(contact.getLastName());
	std::cout << "|" << std::setw(10);;
	std::cout << getSizedString(contact.getNickname());
	std::cout << "|" << std::endl;
}

void	PhoneBook::showContact(int index) const
{
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Dark secret 😈: " << contacts[index].getSecret() << std::endl;
}

void PhoneBook::searchContacts() const
{
	int i = 0;

	while (i < 8)
	{
		if (this->contacts[i].getFirstName().empty())
			break;
		printColumn(contacts[i]);
		i++;
	}
	std::cout << "Please enter an index: ";
	flush(std::cout);
	while (420)
	{
		std::string input;
		std::getline(std::cin, input);
		if (input.empty())
			return ;
		int index = std::atoi(input.c_str());
		if (index < i && index >= 0)
		{
			showContact(index);
			break;
		}
		else
		{
			std::cout << "Please enter a valid index: ";
			flush(std::cout);
		}
	}
}

