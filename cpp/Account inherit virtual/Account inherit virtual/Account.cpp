#include "Account.h"
#include <iostream>
#include <stdexcept>
#pragma once
Account::Account(const double Balance)
{
	if (!setBalance(Balance))
	{
		std::cout << "Initial balance is error!\n";
	}
}

bool Account::setBalance(const double Balance)
{
	if (Balance >= 0)
	{
		balance = Balance;
		return true;
	}
	balance = 0;
	return false;
}

void Account::credit(const double value)
{
	if (value > 0)
	{
		setBalance(balance + value);
		return;
	}
	throw std::invalid_argument("Credit value should be positive.\n");
}

void Account::debit(const double value)
{
	if (value <= 0)
	{
		throw std::invalid_argument("Debit amount must be positive\n");
	}
	if (value <= getBalance())
	{
		setBalance(balance - value);
		return;
	}
	throw std::invalid_argument("Debit amount exceeded account balance\n");
}

double Account::getBalance() const
{
	return balance;
}