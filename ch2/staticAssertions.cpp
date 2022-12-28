/**
 * C++ Static Assertions
 *
 * Learning about static assertions (things we assume tru for the compiler to see)
 * 
 * @author Lane Nickson
 */
//In general, static_assert(A,S) prints S as a compiler error message if A is not true. 
constexpr double C = 299792.458;// km/s
void f(double speed)
{
    const double local_max = 160.0/(60*60);// 160 km/h == 160.0/(60*60) km/s
    // static_assert(speed<C,"can't go that fast"); // error : speed must be a constant
    static_assert(local_max<C,"can't go that fast"); // OK
// ...
}

int main() {
    //Checks at compile time - assertion = expectation
    static_assert( 4 <= sizeof(int), "integers are too small");

    f(10);
}

