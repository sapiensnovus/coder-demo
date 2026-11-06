#include <iostream>
using std::cout, std::endl;

class Factorial {
    public:
        int num;
        Factorial(int num) {
            this->num = num;
            cout << calculation(this->num) << endl;
        }
        int calculation(int n){
            if(n == 0) {
                return 1;
            }
            return n * calculation(n-1);

        }
};

int main() {
    Factorial fact(11);

    return 0;
}
