#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
public:
	CheckingAccount(const double , const double);
	
	virtual void credit(double);
	virtual void debit(double);

	void setFeePerTransaction(double);
	double getFeePerTransaction() const
	{
		return feePerTransaction;
	}

private:
	double feePerTransaction;
};

