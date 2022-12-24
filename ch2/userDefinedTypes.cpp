#include <iostream>
using namespace std;

//Struct (Data structure)
struct Vector {
    int sz; //# of elements
    double* elem; //pointer to elements
};

int main() {
    Vector v;

    int s = 2;
    v.elem = new double[s]; //New operator creates new instance in the "free store" (dynamic memory/heap)
    v.sz = s;

}