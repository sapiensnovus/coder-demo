#include <iostream>
using std::cout, std::endl;
// using namespace std;

class Complex {
    public:
        double real = 0, img = 0;
        Complex(double real=0, double img=0) {
            this->real = real;
            this->img = img;

        }

        void printNumber() {
            if (this->img < 0 ){
                cout << this->real << this->img << "j" << endl;

            } else {
                cout << this->real << "+" << this->img << "j" << endl;

            }
        }
};

// new concpet
void AddComplex(Complex num1, Complex num2) {
    // cout << n1.real << endl;
    double real = num1.real + num2.real;
    double img = num1.img + num2.img;
    if (img < 0) {
        cout << "(" << real  << img << "j" << ")" << endl;
    } else {
        cout << "(" << real << "+" << img << "j" << ")" << endl;
    }
    // cout << num1.real + num2.real << "j" << endl;
    // cout << num1.img + num2.img << "j" << endl;;
}

int main() {
    Complex c1(0, -31);
    c1.printNumber();
    Complex c2(8,0);
    c2.printNumber();

    AddComplex(c1, c2);

    return 0;
}
