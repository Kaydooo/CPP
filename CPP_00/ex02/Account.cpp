/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:52 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/05 23:52:10 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	this->_amount += initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" <<\
	this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_nbAccounts -= 1;
	_displayTimestamp();
	std::cout << "index:" <<\
	this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}
void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(NULL);
    char mbstr[100];
	if (std::strftime(mbstr, sizeof(mbstr), "[%Y%m%d_%H%M%S] ", std::localtime(&t))) 
	{
		std::cout << mbstr;
	}
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout <<"index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	Account::_totalAmount += deposit;
	this->_amount += deposit;
	Account::_totalNbDeposits += 1;
	this->_nbDeposits += 1;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:"\
	<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (withdrawal <= this->_amount)
	{
		Account::_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		this->_nbWithdrawals += 1;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:"\
		<< this->_nbWithdrawals << std::endl;
		return 1;
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return 0;
	}
}
void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"<< this->_amount \
	<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
int		Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}
int		Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}
int		Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}
int		Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << \
	getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << \
	getNbWithdrawals() << std::endl;
}



int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;