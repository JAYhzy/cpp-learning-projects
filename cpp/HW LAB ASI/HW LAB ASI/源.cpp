//#include <iostream>
//using namespace std;

//int main()
//{
//	char ch = '\0';
//	for (int i = 0; i < 8; i++)
//	{
//		if (i % 2)
//		{
//			ch = ' ';
//		}
//		else
//		{
//			ch = '*';
//		}
//		for (int j = 0; j < 16; j++)
//		{
//			if (ch == '*')
//			{
//				cout << ch;
//				ch = ' ';
//			}
//			else
//			{
//				cout << ch;
//				ch = '*';
//			}
//		}
//		cout << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "Enter a number : ";
//	int num = 0;
//	cin >> num;
//
//	int flag = num;
//	int divisor = 1;
//	//计算位数
//	while (flag > 0) {
//		divisor *= 10;
//		flag /= 10;
//	}
//	divisor /= 10;
//	flag = num;
//	while (flag > 0)
//	{
//		cout << flag / divisor << "   ";
//		flag %= divisor;
//		divisor /= 10;
//	}
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "Integer\tSquare\tCube" << endl;
//	cout << 0 << "\t" << 0 * 0 << "\t" << 0 * 0 * 0 << endl;
//	cout << 1 << "\t" << 1 * 1 << "\t" << 1 * 1 * 1 << endl;
//	cout << 2 << "\t" << 2 * 2 << "\t" << 2 * 2 * 2 << endl;
//	cout << 3 << "\t" << 3 * 3 << "\t" << 3 * 3 * 3 << endl;
//	cout << 4 << "\t" << 4 * 4 << "\t" << 4 * 4 * 4 << endl;
//	cout << 5 << "\t" << 5 * 5 << "\t" << 5 * 5 * 5 << endl;
//	cout << 6 << "\t" << 6 * 6 << "\t" << 6 * 6 * 6 << endl;
//	cout << 7 << "\t" << 7 * 7 << "\t" << 7 * 7 * 7 << endl;
//	cout << 8 << "\t" << 8 * 8 << "\t" << 8 * 8 * 8 << endl;
//	cout << 9 << "\t" << 9 * 9 << "\t" << 9 * 9 * 9 << endl;
//	cout << 10 << "\t" << 10 * 10 << "\t" << 10 * 10 * 10 << endl;
//}
//
//#include<iostream>
//using namespace std;
//
//class Student {
//public:
//	Student(string myname,int grade) :name(myname),grade(grade) {};
//
//	int grade;
//	string name;
//	char id;
//};
//int main() {
//	Student woshi("woshishabi",1000);
//	int a = 100;
//	int& b = a;
//	b = 1990;
//	cout << b;
//
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Invoice
//{
//private:
//	string partnumber;
//	string description;
//	int quantity;
//	int price;
//public:
//	Invoice(string, string, int, int);
//
//	string getPartNumber()const;
//	string getDescription()const;
//	int getQuantity()const;
//	int getPrice()const;
//
//	void setPartNumber(string);
//	void setPartDescription(string);
//	void setQuantity(int);
//	void setPrice(int);
//
//	int getInvoiceAccount()const;
//
//};
//
//Invoice::Invoice(
//	string partNumber, string partDescription,
//	int quantity, int price)
//{
//	setPartNumber(partNumber);
//	setPartDescription(partDescription);
//	setQuantity(quantity);
//	setPrice(price);
//}
//
//string Invoice::getPartNumber() const
//{
//	return partnumber;
//}
//
//string Invoice::getDescription() const
//{
//	return description;
//}
//
//int Invoice::getQuantity() const
//{
//	return quantity;
//}
//
//int Invoice::getPrice() const
//{
//	return price;
//}
//
//void Invoice::setPartNumber(string partNumber)
//{
//	Invoice::partnumber = partNumber;
//}
//
//void Invoice::setPartDescription(string partDescription)
//{
//	Invoice::description = partDescription;
//}
//
//void Invoice::setQuantity(int quantity)
//{
//	if (quantity <= 0)
//	{
//		Invoice::quantity = 0;
//	}
//	else
//	{
//		Invoice::quantity = quantity;
//	}
//}
//
//void Invoice::setPrice(int price1)
//{
//	if (price1 <= 0)
//	{
//		Invoice::price = 0;
//	}
//	else
//	{
//		Invoice::price = price1;
//	}
//
//}
//
//int Invoice::getInvoiceAccount()const
//{
//	return (getPrice() * getQuantity());
//}
//
//int main()
//{
//	string x, y;
//	int a, b;
//
//	cout << "Enter Part Number : ";
//	getline(cin, x);
//	cout << "Enter Part Description : ";
//	getline(cin, y);
//	cout << "Enter Price : ";
//	cin >> a;
//	cout << "Enter Quantity of Items : ";
//	cin >> b;
//
//	Invoice invoice(x, y, a, b);
//
//	cout << "Item Number : " << invoice.getPartNumber() << endl;
//	cout << "Item Description : " << invoice.getDescription() << endl;
//	cout << "Total Quantity : " << invoice.getQuantity() << endl;
//	cout << "Price : " << invoice.getPrice() << endl << endl;
//
//	cout << "Total Bill Amount : " << invoice.getInvoiceAccount() << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class People {
//public:
//    People(string myname, int grade){
//        m_name = myname;
//        m_age=grade;
//    };
//    void show();
//protected:
//    string m_name;
//    int m_age;
//};
//
//void People::show() {
//    //this->m_age = 10;
//    cout << "嗨，大家好，我叫" << m_name << "，今年" << m_age << "岁" << endl;
//}
//
//int main() {
//    People die("baba", 18);
//    die.show();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class SavingAccount {
//public:
//	
//	SavingAccount(double);
//    void calculateMonthlyInterest();
//	static void modifyInterestRate(double);
//	void print();
//	
//private:
//	double savingsBalance;
//	static double annualInterestRate;
//};
//
//SavingAccount::SavingAccount(double savingbalance) :savingsBalance(savingbalance) {};
//double SavingAccount::annualInterestRate = 0.03;
//
//void SavingAccount::modifyInterestRate(double i){
//	annualInterestRate = i;
//}
//
//void SavingAccount:: SavingAccount:: calculateMonthlyInterest() {
//	savingsBalance += savingsBalance * (annualInterestRate / 12.0);
//}
//
//void SavingAccount::print(void)
//{
//	cout << savingsBalance <<endl;
//}
//
//int main()
//{
//	double i = 0.04;	
//	SavingAccount::modifyInterestRate(i);
//	SavingAccount saver1(2000.0), saver2(3000.0);
//	saver1.calculateMonthlyInterest();
//	saver2.calculateMonthlyInterest();
//	cout << "\nBalances: Saver 1: ";
//	saver1.print();
//	cout << "\nBalances: Saver 2: ";
//	saver2.print();
//
//	SavingAccount::modifyInterestRate(i);
//	saver1.calculateMonthlyInterest();
//	saver2.calculateMonthlyInterest();
//	cout << "\nNew balances: Saver 1: ";
//	saver1.print();
//	cout << "\nNew balances: Saver 2: ";
//	saver2.print();
//	return 0;
//}

//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//class P {
//public:
//	int a, b;
//	P(int a=0, int b=0) :a(a), b(b) {};
//	friend P operator + (P p1, P p2) {
//		P temp;
//		temp.a = p1.a + p2.a;
//		temp.b = p1.b + p2.b;
//		return temp;
//	}
//	friend ostream &operator<<(ostream& my_cout, P pa) {
//		return my_cout << pa.a << endl << pa.b << endl;
//	}
//	friend istream operator<<(istream &mycin,P pa) {
//		//return mycin >> pa.a;
//
//	}
//
//
//};
//
//int main()
//{
//	/*int a;
//	cin >> a;
//	try {
//		if (a == 0) {
//			throw invalid_argument("cuole");
//		}
//	}
//	catch(invalid_argument){
//		cout<<("GG");
//	}*/
//
//	P p1(1,2), p2(2,3);
//	P p3;
//	p3=operator+(p1, p2);
//	P p4 = p1 + p2;
//	cout << p3.a << endl;
//
//	P p5;
//	cout << p5;
//	return 0;
// }


#include<iostream>
using namespace std;
class comp
{
public:
	comp(double = 0.0, double = 0.0);
	friend istream& operator>>(istream&, comp&);
	friend ostream& operator<<(ostream&, comp&);
	comp& operator*(comp&);
private:
	double i;
	double j;
};

comp::comp(double i, double j) : i(i), j(j){}

istream& operator>>(istream& input, comp& com1)
{
	input >> com1.i;
	input >> com1.j;
	return input;
}
ostream& operator<<(ostream& output, comp& com1)
{
	output << "real:" << com1.i << "+" << com1.j << "j" << endl;
	return output;
}
comp& comp::operator*(comp& com1)
{
	comp temp;
	temp.i = this->i * com1.i - this->j * com1.j;
	temp.j = this->i * com1.j + this->j * com1.i;
	return temp;
}
//main
using namespace std;
int main()
{
	comp com1(1.0, 2.0);
	comp com2(3.0, 4.0);
	//cin >> com1;
	cout << com1;
	cout << com2;
	comp temp = com1 * com2;
	cout << temp;
}