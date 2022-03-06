//Akshay 40
#include "iostream.h"
#include <stdio.h>

int main() {
    char a[100],b; int x=0;
    std::cout << "\tProgram to find the number of times a character occur in a string" << '\n';
    std::cout << "\tEnter the string: " ;
    gets(a);
    std::cout << "\n\tEnter the character whose count you want to check :"; std::cin >> b;
    for (int i = 0; a[i]!='\0'; i++) {
        if (a[i]==b)
            x++;
        else continue;

    }
    std::cout << "\tThe number of times " <<b<< " occours is = " << x << '\n';
    return 0;
}
/*
Output:-
Program to find the number of times a character occur in a string
warning: this program uses gets(), which is unsafe.
Enter the string: Hey there it's Akshay...

Enter the character whose count you want to check :y
The number of times y occours is = 2
*/
