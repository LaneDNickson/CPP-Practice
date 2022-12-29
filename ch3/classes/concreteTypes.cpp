/**
 * C++ Concrete Types
 *
 * Learning about concrete classes
 * 
 * @author Lane Nickson
 */

// Concrete classes - behave like built-in types (int, char, etc.)

class complex {
    double re, im; // representation: two doubles
public:
    complex(double r, double i) :re{r}, im{i} {}  // construct complex from two scalars
    complex(double r) :re{r}, im{0} {} // construct complex from one scalar
    complex() :re{0}, im{0} {} // default complex: {0,0}
   
    double real() const { return re; }
    void real(double d) { re=d; }
    double imag() const { return im; }
    void imag(double d) { im=d; }
    complex& operator+=(complex z) { re+=z.re, im+=z.im; return *this; } // add to re and im
    
   
    complex& operator-=(complex z) { re-=z.re, im-=z.im; return *this; }  // and return the result
    
    complex& operator*=(complex); // defined out-of-class somewhere
    complex& operator/=(complex); // defined out-of-class somewhere
    
    
};