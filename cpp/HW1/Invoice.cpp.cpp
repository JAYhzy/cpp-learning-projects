Invoice::Invoice(
	string partNumber, string partDescription,
	int quantity, int price)
{
	setPartNumber(partNumber);
	setPartDescription(partDescription);
	setQuantity(quantity);
	setPrice(price);
}

string Invoice::getPartNumber() const
{
	return partnumber;
}

string Invoice::getDescription() const
{
	return description;
}

int Invoice::getQuantity() const
{
	return quantity;
}

int Invoice::getPrice() const
{
	return price;
}

void Invoice::setPartNumber(string partNumber)
{
	Invoice::partnumber = partNumber;
}

void Invoice::setPartDescription(string partDescription)
{
	Invoice::description = partDescription;
}

void Invoice::setQuantity(int quantity)
{
	if (quantity <= 0)
	{
		Invoice::quantity = 0;
	}
	else
	{
		Invoice::quantity = quantity;
	}
}

void Invoice::setPrice(int price1)
{
	if (price1 <= 0)
	{
		Invoice::price = 0;
	}
	else
	{
		Invoice::price = price1;
	}

}

int Invoice::getInvoiceAmount()const
{
	return (getPrice() * getQuantity());
}

int main()
{
	string x, y;
	int a, b;

	cout << "Enter Part Number : ";
	getline(cin, x);
	cout << "Enter Part Description : ";
	getline(cin, y);
	cout << "Enter Price Per Item : ";
	cin >> a;
	cout << "Enter Quantity of Items : ";
	cin >> b;

	Invoice invoice(x, y, a, b);

	cout << "\n\nBill Summary : \n\n";

	cout << "Item Number : " << invoice.getPartNumber() << endl;
	cout << "Item Description : " << invoice.getDescription() << endl;
	cout << "Total Quantity : " << invoice.getQuantity() << endl;
	cout << "Price Per Item : " << invoice.getPrice() << endl << endl;

	cout << "Total Bill Amount : " << invoice.getInvoiceAmount() << endl;
	return 0;
}
