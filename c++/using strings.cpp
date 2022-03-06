//
//  using strings and functions.cpp
//
//
//  Created by Akshay on 27/09/18.
//

#include <iostream>
#include <string.h>
#include<stdlib.h>
#include <cstring>
#include<stdio.h>

using namespace std;
int main()
{
    int x;
    char y[20],z[15],a[3];
    do {
        std::cout << "Menu driven Program using strings and functions" << '\n';
        std::cout << " Enter your choice's number " << '\n';
        std::cout << "1. Reverse the string" << '\n';
        std::cout << "2. Find the length" << '\n';
        std::cout << "3. Copy the string" << '\n';
        std::cout << "4. Compare the string" << '\n';
        std::cout << "5. Change the case to upper" << '\n';
        std::cout << "6. Change the case to lower" << '\n';
        std::cout << "Your choice " ;   std::cin >> x ;
        switch (x) {
            case 1: std::cout << "Enter the string " ;
                     cin.getline(y,sizeof(20));
                     std::cout << "\nThe string in reverse order is " << (y) << '\n';
                     break;
            case 2: std::cout << "Enter the string "; cin.getline(y,sizeof(20));
                     std::cout << "\nThe length of the string is " << strlen(y)<<'\n';
                     break;
            case 3: std::cout << "Enter the first string " ; cin.getline(y,sizeof(20));
                     std::cout << "\nEnter the second string " ; cin.getline(z,sizeof(15));
                     std::cout << "\nThe string after copying is " << strcpy(y,z)<< '\n';
                     break;
            case 4: std::cout << "Enter the first string " ; cin.getline(y,sizeof(20));
                     std::cout << "\nEnter the second string " ; cin.getline(z,sizeof(15));
                     std::cout << "\nThe string comparison says " ;
                     if(strcmp(y,z)==0) std::cout << "that they are equal" << '\n';
                     else std::cout << "that they are not equal " << '\n';
                     break;
            case 5: std::cout << "Enter the string ";  cin.getline(y,sizeof(20));
                     std::cout << "\nThe string in uppercase is " << (y) << '\n';
                     break;
            case 6: std::cout << "Enter the string "; cin.getline(y,sizeof(20));
                     std::cout << "\nThe string in lowercase is " << (y) << '\n';
                     break;
            default: std::cout << "Error invalid choice " << '\n';
        }
        std::cout << "Do you want to continue (yes/no) " ;
        std::cin >> a;
    } while(strcmp(a,"yes")==0);
    if (strcmp(a,"no")==0) std::cout << "OK then" << '\n';
    else std::cout << "Do not play...  program aborted " << '\n';
    exit (0);
    return 0;
}
