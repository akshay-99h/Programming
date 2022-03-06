//Program 18 Akshay
#include <iostream>
using namespace std;
int main() {
    int i ;
    int z=0;
    std::cout << "Print the sum of first ten numbers " << '\n';
    for (i = 0; i<=10; i++)  z=i+z;
    std::cout <<"The sum of first ten numbers is = " << z << '\n';
    return 0;
}
/*
OUTPUT
Print the sum of first ten numbers
The sum of first ten numbers is = 55
*/
