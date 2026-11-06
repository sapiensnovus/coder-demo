// 12. To impliment inline function

#include <iostream>
using namespace std;

inline int square(int x) {
	return x * x;
}

int main() {
	int x{10};  // new concept
	cout << square(x);

	return 0;
}