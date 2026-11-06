#include <iostream>
using std::cout, std::endl;

// Run time polymorphism (function overriding)
class Parent{
    public:
        void priyority() {
            cout << "Should follow my mother's voice first";
        }
};

class Child : public Parent{
    public:
        void priyority() {
            cout << "I am the main character, So let's have fun";
        }
};

int main() {
    Child c1;
    c1.priyority();

    return 0;
}
