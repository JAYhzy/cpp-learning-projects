
#include<iostream>
#include<string>
using namespace std;

class Invoice
{
private:
	string partnumber;
	string description;
	int quantity;
	int price;
public:
	Invoice(string, string, int, int);

	string getPartNumber()const;
	string getDescription()const;
	int getQuantity()const;
	int getPrice()const;

	void setPartNumber(string);
	void setPartDescription(string);
	void setQuantity(int);
	void setPrice(int);

	int getInvoiceAmount()const;

};
