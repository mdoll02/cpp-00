/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:44:26 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/06 14:44:33 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts + 1;
	_totalAmount += initial_deposit;
}

Account::~Account()
{

}

Account::Account()
{

}

int	Account::getNbAccounts()
{
	return(_nbAccounts);
}

int	Account::getTotalAmount()
{
	return(_totalAmount);
}

int	Account::getNbDeposits()
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}

void	Account::_displayTimestamp()
{
	std::time_t	t = std::time(0);
	std::tm	*tm = std::localtime(&t);

	std::cout << '[' << tm->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_mday << '_';
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << tm->tm_sec << ']';
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout <<  " index:" << _accountIndex << ";amount:" << _amount << ";deposits:";
	std::cout << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

int Account::checkAmount() const
{
	return(this->_amount);
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (checkAmount() - withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		return (true);
	}
	else
		return (false);
}
