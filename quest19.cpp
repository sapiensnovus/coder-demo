#include <iostream>
#include <string>
using std::endl, std::cout, std::string;

class Compare{
    public:
        string str1, str2;
        Compare(string str1, string str2){
            this->str1 = str1;
            this->str2 = str2;
            comparision();
        }

        void comparision(){
            cout << "Lenght of " << this->str1 << " " << this->str1.length() << endl;
            cout << "Lenght of " << this->str2 << " " << this->str2.length() << endl;

            if(this->str1 == this->str2){
                cout << "Both string are equal \n";
            } else if(this->str1 < this->str2){
                cout << this->str1 << " comes before " << this->str2 << " lexicographically"<< endl;
            } else {
                cout << this->str2 << " comes before " << this->str1 << " lexicographically"<< endl;

            }
        }
};

int main() {
    Compare s("Johnathen", "Mohini");

    return 0;
}
