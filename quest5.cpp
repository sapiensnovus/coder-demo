#include <iostream>
#include <cmath>  // for square root
using std::cout, std::endl, std::sqrt;

class Area {
    public:
        int side1, side2, side3;
        Area(int side1=0, int side2=0, int side3=0) {
            this->side1 = side1;
            this->side2 = side2;
            this->side3 = side3;
            areaTriangle();
        }

        // s = (a+b+c)/2
        // area = sqrt( s(s-a)(s-b)(s-c) )

        void areaTriangle() {
            float s = (this->side1 + this->side2 + this->side3) / 2;
            float a = sqrt(s*(s - this->side1)*(s - this->side2)*(s - this->side3));

            cout << "Area= " << a << endl;
        }
};

int main() {
    Area a(3,6,5);

    return 0;
}
