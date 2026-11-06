// 9. Swapping of two numbers using friend function

#include <iostream>
using namespace std;

class Initial_num{
private:
	int num1 = 2026;
	friend void ending_num();  // friend function a private member k access krba pre
};

void ending_num(){
	int num2 = 2025;
	Initial_num obj;
	obj.num1 = num2;

	cout << obj.num1 << endl; 
}

int main(){
	ending_num();

	return 0;
}
