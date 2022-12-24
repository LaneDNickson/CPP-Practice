#include <iostream>

using namespace std;

//Class declaration
class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    int size();
private:
    double* elem; // elem points to an array of sz doubles
    int sz;
};

int main() {
    Vector v(2);
    cout << v.size();
    cout << v[-1];

}

// Function definition
double sqrt(double d) {
    //Perform algorithm
    return 1;
}

Vector::Vector(int s) :elem{new double[s]}, sz{s} {} //Definition of constructor and members

double& Vector::operator[](int i)
{
    if (i < 0 || size()<= i) throw out_of_range{"Vector::operator[]"};
    return elem[i];
}// definition of subscripting

int Vector::size()
{
return sz;
}// definition of size()

void f(Vector& v)
{
// ...
try { // exceptions here are handled by the handler defined below
v[v.size()] = 7; // try to access beyond the end of v
}
catch (out_of_range) { // oops: out_of_range error
// ... handle range error ...
}
// ...
}