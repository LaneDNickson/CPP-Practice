/**
 * C++ Invariant Practice
 *
 * Constructing a vector class that has invariants
 * 
 * @author Lane Nickson
 */

//Our old classes.cpp did not account for initializing the vector with an invalid size
//Class invariant - statement of what is assumed to be true for a class
#include <iostream>
using namespace std;

//Vector structure
class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    int size();
private:
    double* elem; // elem points to an array of sz doubles
    int sz;
};

Vector::Vector(int s)
{
if (s<0) throw length_error{"Too long"};
elem = new double[s];
sz = s;
}

void test()
{
try {
Vector v(-27);
}
catch (std::length_error) {
// handle negative size
    cout << "Bad length" << "\n";
}
catch (std::bad_alloc) {
// handle memory exhaustion
    cout << "Mem exhaustion" << "\n";
}
}

int main() {
    test();
}