//C++ lib for standard IO
#include <iostream>
using namespace std; // make names from std visible without std:: (§2.4.2)

//The minimal C++ program is just the main function
int main() { 
    bool boolval = true;
    char cooolchar = 'a';
    int hello = 9;
    double floatingpoint = 299793.0;
    cout << sizeof(bool) << "\n";
    cout << sizeof(char) << "\n";
    cout << sizeof(int) << "\n";
    cout << sizeof(double) << "\n";

    int i1 = 7;
    int i2 {7}; //USE THIS
    int i3 = {7};

    auto b = true; //Auto assumes the variable type, in this case a bool

    const int dmv = 17; // Const can't/shouldn't be changed, evaluated at runtime
    constexpr double max1 = 1.4*(dmv * dmv); //Expression evaluated at compile time to prevent corruption



}