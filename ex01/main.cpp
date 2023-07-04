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
// #include "Phonebook.hpp"

int main ()
{
	char buff[512];
	Contact contact;

	std::cout << "Enter Something: ";
	std::cin >> buff;
	std::cout << "You entered: " << "[" << buff << "]" << std::endl;
	return 0;
}