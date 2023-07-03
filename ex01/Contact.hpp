#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>

class Contact {

public:
	Contact ();
	~Contact ();
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