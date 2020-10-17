//Akshay 37
#include <iostream>
#include <stdio.h>
int main() {
    int x=0,sum=0;
    std::cout << "Program to find the sum of all even numbers in an array" << '\n';
    std::cout << "Enter ten numbers" << '\n'; int a[10];
    for (int i = 0; i != 10; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i != 10; i++) {
        if (a[i]%2==0) {
            sum=sum+a[i];
        }
        else continue;
    }

    std::cout << "The sum of all the even numbers is " << sum<<'\n';
    return 0;
}
/*
Program to find the sum of all even numbers in an array
Enter ten numbers
1
22
3
42
56
898
65
0
97
54
The sum of all the even numbers is 1072
*/
