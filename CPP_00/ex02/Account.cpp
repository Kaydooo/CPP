/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:52 by mal-guna          #+#    #+#             */
/*   Updated: 2022/03/10 14:07:42 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	this->_amount += initial_deposit;
	std::cout << "[19920104_091532] " << "index:" <<\
	this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_nbAccounts -= 1;
	std::cout << "[19920104_091532] " << "index:" <<\
	this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	Account::_totalAmount += deposit;
	this->_amount += deposit;
	Account::_totalNbDeposits += 1;
	this->_nbDeposits += 1;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:"\
	<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
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
	std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";amount:"<< this->_amount \
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
	std::cout << "[19920104_091532] " << "accounts:" << getNbAccounts() << ";total:" << \
	getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << \
	getNbWithdrawals() << std::endl;
}



int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;