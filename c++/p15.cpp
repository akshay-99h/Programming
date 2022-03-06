//Program 15 Akshay
#include <iostream>
using namespace std;
int main() {
    float x,y,z;
    std::cout << "To display the factorial of a no. " << '\n';
    std::cout << "Enter the number " ;
    std::cin >> x;
    y=1;z=1;
    if (x==0 || x==1)
    std::cout << "The factorial is 1 " << '\n';
    else
    {
        for ( y ; y <= x ; ++y) {
            z = z*y;
        }
        std::cout << "The factorial of given no. = " << z << '\n';
    }
    return 0;
}
/*
OUTPUT
To display the factorial of a no.
Enter the number 15
The factorial of given no. = 2004310016

To display the factorial of a no.
Enter the number 99
The factorial of given no. = inf

To display the factorial of a no.
Enter the number 15
The factorial of given no. = 1.30767e+12
*/
