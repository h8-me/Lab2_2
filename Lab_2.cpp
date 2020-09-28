#include <iostream>

using namespace std;


class MyClass {
public:
	static int num;
	int id;
	MyClass() {
		id = ++num;
	};

	void printNumber() {
		cout << "Мой порядковый номер: " << id << endl;
	};
};
int MyClass::num = 0;

int main() {
	setlocale(LC_ALL, "Russian");

	MyClass* i1 = new MyClass();
	MyClass* i2 = new MyClass();
	MyClass* i3 = new MyClass();
	MyClass* i4 = new MyClass();

	i1->printNumber();
	i2->printNumber();
	i3->printNumber();
	i4->printNumber();
	system("pause");
	return 0;
}