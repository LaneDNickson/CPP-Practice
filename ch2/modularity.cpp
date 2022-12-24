#include <iostream>

using namespace std;

//Function declaration
double sqrt(double);

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

}

// Function definition
double sqrt(double d) {
    //Perform algorithm
    return 1;
}

Vector::Vector(int s) :elem{new double[s]}, sz{s} {} //Definition of constructor and members

double& Vector::operator[](int i)
{
return elem[i];
}// definition of subscripting

int Vector::size()
{
return sz;
}// definition of size()