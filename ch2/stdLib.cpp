//C++ lib for standard IO
#include <iostream>
using namespace std; // make names from std visible without std:: (§2.4.2)

double square(double x) {
    return x * x;
}
void print_square(double x) {
    cout << "The sqaure of " << x << " is " << square(x) << "\n";
}

//The minimal C++ program is just the main function
int main() { 
    //Inside, we have a hello world
    std::cout << "Hello, world!\n";
    cout << "Hello world, simplified\n"; //This uses the namespae std

    // << = "put to"
    //std:: = "standard library namespace"
    //cout = standard output stream

    print_square(1.234);


}