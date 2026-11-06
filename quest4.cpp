#include <iostream>
#include <iomanip>  // for decimal precision
using std::cout, std::cin, std::endl;

class Distance {
    public:
        void distanceBetweenCities() {
            int city;
            cout << "Enter distance between any Two cities: ";
            cin >> city;
            int inMtr = city * 1000;
            int inCmtr = city * 100000;
            double inInch = city * 39370.1;  // 1 km = 39370.1 inch
            cout << "distance in Meter: " << inMtr << endl;

            // for precision values
            cout << "distance in Inch: " << std::fixed << std::setprecision(1) << inInch << endl;

            cout << "distance in CentiMeter: " << inCmtr << endl;
        }
};

int main() {
    Distance d;
    d.distanceBetweenCities();
    return 0;
}
