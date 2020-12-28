//Program 13 Akshay
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int x,y;
    cout << "Enter a number " ;
    cin >> y;
    for(x=2 ; x<=(y-1) ; x++){
        if (y%x==0) {
            cout << "This is not a prime number " << '\n';
            exit (0);
        }
        else if (y==2) {
            break;
        }
        else continue;
    }
    cout << "This is a prime number" << '\n';
    return 0;
}
/*
OUTPUT
Enter a number 61
This is a prime number
*/
