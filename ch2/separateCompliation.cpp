#include <iostream>

using namespace std;

int main() {

}

// Vector.h:
class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    int size();
private:
    double* elem; // elem points to an array of sz doubles
    int sz;
};

// user.cpp:
// #include "Vector.h"
// #include <cmath>
// using namespace std;
// get Vector’s interface
// get the the standard-librar y math function interface including sqrt()
// make std members visible (§2.4.2)

// Vector.cpp:
// #include "Vector.h" // get the interface
Vector::Vector(int s)
    :elem{new double[s]}, sz{s}
{
}
double& Vector::operator[](int i)
{
    return elem[i];
}
int Vector::size()
{
    return sz;
}