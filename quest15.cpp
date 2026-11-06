#include <iostream>
using namespace std;

class Fact{
    public:
        int num;
        Fact(int n){
            num = n;
            factorial(num);
        }
        virtual void factorial(int n){
            int mul=1;
            for(int i=1; i<=n; i++) {
                mul *= i;
            }
            cout << "Factorial of " << n << " is = " << mul << endl;
        }
};

int main() {
    Fact(0);

    return 0;
}
