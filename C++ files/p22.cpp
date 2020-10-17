//Program 19 Akshay
#include <iostream>
using namespace std;
int main() {
    int i,j,k ;
    std::cout << "Enter the three numbers with spaces in between ";
    std::cin >> i >> j >> k ;
    if (i<j)
    {
        if (j>k){
            std::cout <<  j  <<  " is the largest of all " << '\n';
        }
    }
    else if (i>j)
    {
        if (i>k)
        {
            std::cout <<i<< " is the largest of all" << '\n';
        }
    }
    else if( k>i)
    {
        if (k>j)
        std::cout << k << " is the largest of all" << '\n';
    }
    else
    std::cout << "Error!" << '\n';
    return 0;
}
/*
OUTPUT
Enter the three numbers with spaces in between 45 8 9
45 is the largest of all
*/
