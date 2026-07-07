#pragma once
class Account
{
public:
	Account(const double);

	bool setBalance(double);
	void credit(double);
	void debit(double);
	double getBalance(void) const;

private:
	double balance;
};

