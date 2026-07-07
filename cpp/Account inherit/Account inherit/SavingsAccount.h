#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
public:
	SavingsAccount(const double , const double);

	double getInterestRate() const
	{
		return interestRate;
	}
	void setInterestRate(const double);

	double calculateInterest() const;
private:
	double interestRate;
};

