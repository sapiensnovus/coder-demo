#include <iostream>
using std::cout, std::endl;

class Smallest {
    public:
        int num1, num2, num3;
        Smallest(int num1, int num2, int num3){
            this->num1 = num1;
            this->num2 = num2;
            this->num3 = num3;
            findSmallest();
        }

        void findSmallest(){
            if(this->num1 < this->num2 && this->num1 < this->num3) {
                cout << "The smallest is " << this->num1 << endl;
            } else if (this->num2 < this->num1 && this->num2 < this->num3) {
                cout << "The smallest is " << this->num2 << endl;
            } else {
                cout << "The smallest is " << this->num3 << endl;
            }
        }
};

int main() {
    Smallest(3,6,10);

    return 0;
}
