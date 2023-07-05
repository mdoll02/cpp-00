/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:43:09 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/04 08:32:54 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main ()
{
	PhoneBook	book;

	while (420)
	{
		std::string command;

		std::cout << "Please enter a command:";
		std::getline (std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			book.addContact();
		else if (command == "SEARCH")
			book.searchContacts();
		else
			std::cout << "Invalid command" << std::endl;
	}

	return 0;
}