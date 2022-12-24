/**
 * C++ Class Practice
 *
 * Constructing a vector class
 * 
 * @author Lane Nickson
 */

#include <iostream>
using namespace std;

class Vector {
public:
    Vector(int s) :elem{new double[s]}, sz{s}{}
    //same as:
    // Vector(int s) {
    //     elem = new double[s];
    //     sz = s;
    // }

    double& operator[](int i){
        return elem[i];
    }

    int size() {
        return sz;
    }
private:
    double* elem;
    int sz;
};

int main() {
    Vector v(2);
    cout << v.size();
}
