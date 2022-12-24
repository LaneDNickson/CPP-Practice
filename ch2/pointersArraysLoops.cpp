#include <iostream>
using namespace std;


void copy_fct() {
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];// to become a copy of v1

    for (auto i = 0; i != 10; ++i) { //copy elements
        v2[i] = v1[i];
    }
}

void increment()
{
    //auto& is a reference - basically another variable that maps to the same chunk of memory as another. Directly accessing array.
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    for (auto& x : v)
        ++x;
}
//The minimal C++ program is just the main function
int main() { 
    //array of elements
    char v[6];
    //Char pointer
    char* p; 

    //assign pointer to array location
    p = &v[3];
    //Assign array value
    char x = *p;

    int v[10] = {0,1,2,3,4,5,6,7,8,9};
    //"RANGE-FOR-STATEMENT"
    for (auto x: v) {
        //Print each int x in list v
        cout << x << '\n';
    }

    //Use nullptr instead of NULL
    double* pd = nullptr;
    

}