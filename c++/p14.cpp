//Program 14 Akshay
#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    std::cout << "Enter a number " ;
    std::cin >> x;
    y=x*x*x;
    z=x*x;
    if (x%2==0)
    std::cout << "The cube of this even no. is " << y <<'\n';
    else if (x%2!=0) {
        std::cout << "The square of this odd no. is " << z<<'\n';
    }
    else
    std::cout << "error" << '\n';
    return 0;
}
/*
OUTPUT
Enter a number 4
The cube of this even no. is 64
*/
