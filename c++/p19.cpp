//Program 19 Akshay
#include <iostream>
using namespace std;
int main() {
    int i ;
    std::cout << "Enter the number of the year ";
    std::cin >> i;
    if (i%4==0)
        std::cout << "This is a leap year " << '\n';
    else
        std::cout << "This is not a leap year " << '\n';
    return 0;
}
/*
OUTPUT
Enter the number of the year 2018
This is not a leap year 
*/
