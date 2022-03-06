// Akshay program 38

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
    char str[30]; char ch; int y;
    std::cout << " To find the position of a character in a string " << '\n';
    std::cout << "Enter the string : " ; gets(str);
    std::cout << "\n Enter the character whose position you want to find : " ;
    std::cin >> ch;
    for ( int i = 0 ; str[i]!='\0' ; i++ )
    {
        if (str[i]==ch)
        {
            y=i+1;
            break;
        }
        else continue;
    }
    std::cerr << " The character is first found in the string at the position : " << y ;
    return 0;
}

/*
Output:-
To find the position of a character in a string
Enter the string : My name is Akshay

Enter the character whose position you want to find : h
The character is first found in the string at the position : 15
*/
