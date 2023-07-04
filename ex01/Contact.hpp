/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:14:03 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/04 10:12:08 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {

	public:
		Contact();
		~Contact();
		void	setFirstName(std::string value);
		void	setLastName(std::string value);
		void	setNickname(std::string value);
		void	setPhoneNumber(std::string value);
		void	setSecret(std::string value);

		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getSecret() const;

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_secret;

};


#endif