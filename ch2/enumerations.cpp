#include <iostream>
using namespace std;

enum class Color {red, blue, green};

enum class Traffic_light {green, yellow, red};

Color col = Color::red;

Traffic_light light = Traffic_light::red;

// Color x = red; // error : which red?
// Color y = Traffic_light::red; // error : that red is not a Color
Color z = Color::red; // OK


Traffic_light& operator++(Traffic_light& t) {
    switch (t) {
    case Traffic_light::green:
        return t=Traffic_light::yellow;
    case Traffic_light::yellow:
        return t=Traffic_light::red;
    case Traffic_light::red:
        return t=Traffic_light::green;
    }
}

Traffic_light next = ++light;
// next becomes Traffic_light::green