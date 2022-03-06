//Program 17 Akshay
#include <iostream>
using namespace std;

int main() {
    char x;
    int y,z;
    float p,q;
    std::cout << "Menu Driven Program of Calculator " << '\n';
    std::cout << "1. Addition" << '\n';
    std::cout << "2. Subtraction" << '\n';
    std::cout << "3. Multiplication" << '\n';
    std::cout << "4. Division " << '\n';
    std::cout << "Enter the number of the menu you want to select " ;
    std::cin >> x ;
    std::cout << "Enter the operands " ;
    std::cin >> y >> z;
    p=y*z;
    q=y/z;
    switch (x) {
        case '1'  : std::cout << "The sum is " << (y+z) << '\n';
                    break;
        case '2'  : std::cout << "The difference is " << (y-z) << '\n';
                    break;
        case '3'  : std::cout << "The product is " << p << '\n';
                    break;
        case '4'  : std::cout << "The quotient is " << q << '\n';
                    break;
        default : std::cout << " Error while entering selection " << '\n';
                    break;
    }
    return 0;
}
/* OUTPUT
Menu Driven Program of Calculator
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter the number of the menu you want to select 3
Enter the operands 89 72
The product is 6408
*/
