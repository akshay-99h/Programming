//Program 7 Akshay
#include <c++/4.2.1/backward/iostream.h>
#include <math.h>
#include "calci.h"

int main(int argc, char const *argv[]) {
    double x;
    cout << " Enter a number ";
    cin   >> x;
    cout << " Square root of x = " << sqrt(x) << '\n';
    cout << " Square of x = " << pow(x,2) << '\n';
    cout << cube(x) << '\n';
    return 0;
}
/*
    OUTPUT
         Enter a number 23
         Square root of x = 4.79583
         Square of x = 529
*/
