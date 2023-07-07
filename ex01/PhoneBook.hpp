/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:13:35 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/04 11:03:12 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <string>

class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		int	addContact();
		void	searchContacts() const;

	private:
		void	_setContact(std::string *contact_info);
		void	_printColumn(Contact contact) const;
		std::string	_getSizedString(std::string string) const;
		void 	_showContact(int index) const;
		Contact contacts[8];
};

#endif