#include <iostream>
using std::cout, std::endl, std::string;

// class Array{
//   public:
//     string name;
//     Array(string name){
//         this->name = name;
//         cout << this->name << endl;
//     }
// };

class Square {
    public:
        int side;
        string colour;

        void print(){
            cout << "side " << side;
            cout <<", color " << colour << endl;
        }

        Square(){
            side = 0;
            colour = "black";
        }
};

int main() {
    // Array a("john")
    Square squares[3];

    for (int i=0; i<3; i++){
        squares[i].print();
    }
    return 0;
}
