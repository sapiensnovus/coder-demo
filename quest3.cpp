#include <iostream>
#include <cmath>  // for explicitly convert a negative to positive
using std::cout, std::endl, std::abs;


class Date {
    public:
        int date1, month, year;
        Date(int date1=1, int month=10, int year=2026) {
            this->date1 = date1;
            this->month = month;
            this->year = year;
        }

        void countDays(int date2) {
            int duration = abs(this->date1 - date2);  // for positive outcome

            cout << "From date " << this->date1 << " to " << date2 << " we have " << duration << " days gap" << endl;
        }
};

int main() {
    Date d1(9);
    d1.countDays(20);

    return 0;
}
