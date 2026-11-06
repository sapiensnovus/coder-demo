#include <iostream>
using namespace std;

class Home{
    public:
        string h_no, vanue, type;
};

class Parent : public Home{
    public:
        string mother, father, m_profession, f_profession;
        int m_salary, f_salary;
};

class Child : public Parent{
    public:
        string name, school_name, hobby;
};

int main() {
    Child demo;
    demo.h_no = "149";
    demo.vanue = "Assam, Guwahati";
    demo.name = "Ankur";
    demo.father = "Probin";
    demo.mother = "Joshoda";
    demo.hobby = "Story Writing";

    cout << demo.name << endl;
    cout << demo.hobby << endl;

    return 0;
}
