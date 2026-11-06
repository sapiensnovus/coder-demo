#include <iostream>
using namespace std;

class Base{
	public:
	string name, roll, subject;
	
	Base(){
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter roll: ";
	cin >> roll;
	cout << "Enter subject: ";
	cin >> subject;
		
	}
};

class Derived : public Base{
	public:
	string sub_code;
	int inter_marks, exter_marks;
	
	Derived() {
	cout << "Enter subject code: ";
	cin >> sub_code;
	cout << "Enter internal marks: ";
	cin >> inter_marks;
	cout << "Enter external marks: ";
	cin >> exter_marks;
	print();	
	}
	
	void print(){
		cout << "\nName= " << name << endl;
		cout << "subject code= " << sub_code << endl;
	}
};

int main() {
	Derived d;
	
	return 0;
}