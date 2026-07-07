#include<vector>
#include<string>
#include <iostream>
#include<iomanip>
using namespace std;

class Student {
public:
	Student() { name = 'kong', Roll_No = 0, grade = 0; }
	/*Student(string Name,int Roll,int Grade){
		getDetails(Name, Roll, Grade);
	}*/
	void setDetails(string Name, int Roll, int Grade) {
		name = Name;
		Roll_No = Roll;
		grade = Grade;
	}
	void putDetails() {
		cout << this->name << this->Roll_No << this->grade << endl;
	}
	string getname() {
		return this->name;
	}
	int getno() {
		return this->Roll_No;
	}
	int getgrade() {
		return this->grade;
	}
private:
	string name;
	int Roll_No;
	int grade;
};

int main()
{
	Student arr[5];
	string name;
	int Roll;
	int grade;
	for (int i = 0; i < 5; i++) {
		cin >> name >> Roll >> grade;
		arr[i].setDetails(name, Roll, grade);
	}
	for (int i = 0; i < 5; i++) {
		arr[i].putDetails();
	}
	return 0;
}