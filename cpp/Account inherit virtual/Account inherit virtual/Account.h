#pragma once
class Account
{
public:
	Account(const double);

	bool setBalance(double);
	virtual void credit(double);
	virtual void debit(double);
	double getBalance(void) const;

private:
	double balance;
};

