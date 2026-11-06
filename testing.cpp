// #include <iostream>
// using namespace std;
//
// class App{
//     public:
//         string name;
//         App(string name) {
//             this->name = name;
//         }
//         int id;
//         static int trafic;
//         static count() {
//             id = ++trafic;
//         }
//
// };
//
// int App::trafic = 0;
//
// int main() {
//     App a("mishra");
//     App b("Asha");
//     App c("Barasha");
//
//     cout << App::trafic;
//     return 0;
// }


// #include <iostream>
// using namespace std;
//
// class Counter {
//     public:
//         int id;
//         static int total;
//
//         Counter() {
//             id = ++total;
//         }
// };
//
// int Counter::total = 0;
//
// int main() {
//     Counter a,b,c,d;
//
//     // total is increrment automatically when make new instance
//     cout << Counter::total;
// }


#include <iostream>
// #include <set>
using namespace std;

class Base{
    public:
        string name;
        Base(){
            cout << "name: ";
            cin >> name;
        }
};

int main() {
    // set<string> name;
    // name.insert("John");
    // name.insert("Roghu");
    // name.insert("Roghu");
    // name.insert("Arnav");
    // name.insert("Tamim");
    Base b;

    return 0;
}
