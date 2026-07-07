#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
public:
	CheckingAccount(const double , const double );
	
	void credit( double );
	void debit( double );

	void setFeePerTransaction( double );
	double getFeePerTransaction() const
	{
		return feePerTransaction;
	}

private:
	double feePerTransaction;
};

