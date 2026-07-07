#include<iostream>
#include<string>
using namespace std;
//class T {
//public:
//	T(int c, int d) :a(c), b(d) { };
//	void add(T& x) {
//		x.a = 20, x.b = 20;
//	}
//	void get(T A) {
//		cout << A.a << endl << A.b << endl;
//	}
//private:
//	int a;
//	int b;
//};
//
//class TA :public T {
//public:
//	TA(int s, int a, int b) :T(a, b), s(s) {};
//private:
//	int s;
//};

int main()
{
	//T x(10,10);
	//TA y(20, 20, 1);
	//x.add(x);
	//x.get(x);
	//y.add(y);
	//y.get(y);
	char a[] = "then";
	char b[] = "than";
	char* aa = a, * bb = b;
	aa += 2, bb += 2;
	cout << strcmp(aa, bb) << endl;
	return 0;
}