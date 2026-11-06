// static member
#include <iostream>
using namespace std;

class Bank {
    public:
        int balance;
        static float rate;
};

// static member declearation
float Bank::rate = 6.5;   // ::scope resolution

int main() {
    Bank a,b;
    a.balance = 1000;
    b.balance = 2000;

    cout << Bank::rate << endl;
    // accessing
    cout << a.rate << endl;
    cout << b.rate;

    return 0;
}
