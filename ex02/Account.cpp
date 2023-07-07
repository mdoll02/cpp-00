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

Account::Account( int initial_deposit ) : _amount(initial_deposit), _accountIndex(_nbAccounts + 1), _nbDeposits(0), _nbWithdrawals(0)
{
	-_nbAccounts++;
}

Account::~Account( void )
{

}