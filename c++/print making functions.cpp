//Akshay 31
#include <iostream>
#include <stdio.h>

void rev();
void len();
void compi();
void cat();
void cpy();

    int main()
    {
        int x=0;
        char y;
        do {
            std::cout << "Menu driven program using user defined functions" << '\n';
            std::cout << "1. Find the length of the string " << '\n';
            std::cout << "2. Find the reverse of the string " << '\n';
            std::cout << "3. Compare two strings (case sensitive)" << '\n';
            std::cout << "4. Concatanate two strings " << '\n';
            std::cout << "5. Using copy function \n" << '\n';
            std::cout << "Enter your choice  " ;  std::cin >> x;

            switch (x) {
                case 1: len();break;
                case 2: rev();break;
                case 3: compi();break;
                case 5: cat();break;
                case 6: cpy();break;
                default : std::cout << "!!! Choice should must be between one and six" << '\n';
                        continue;
                    }

                    std::cout << "\nDo you want to continue (y/n)? " << '\n';
                    std::cin >> y;

                } while(y=='y');
                if ( y == 'n' )
                {
                    std::cout << "Okay then.... Thankyou" << '\n';
                    exit(0);
                }
                if (y != 'y' || y != 'n')
                {
                    std::cout << "Dont play... program aborted..." << '\n';
                    exit(0);
                }
                return 0;
            }


void len()
{
    char a[30]; int i;
    std::cout << "Enter the string you want to find the length of " << '\n';
    std::cin >> a;
    for (i = 0;a[i]!='\0' ; i++);
    std::cout << "Length of the string = " << i <<'\n';
}


void rev()
{
    char a[30],b[30];int i,j=0;
    std::cout << "Enter the string you want to reverse " << '\n';
    std::cin >> a;
    for (i = 0; a[i] != '\0'; i++) ;
    j=i+1;
    for (j; j >= 0; j--)
    {
            b[i]=a[j];
            std::cout << b[i];
            i++;
    }
}


void compi()
{
    char a[30],b[30];int y;
    std::cout << "Enter the first string " << '\n';
    std::cin >> a;
    std::cout << "Enter the second string" << '\n';
    std::cin >> b;
    for (int i = 0; a[i] !='\0'; i++)
    {
        if (a[i]!=b[i])
        {
            y=0;
            break;
        }
        else
        {
            y=1;
            continue;
        }
    }
    if (y==0)
    {
        std::cout << "The given strings are not equal " << '\n';
    }

    else std::cout << "The given strings are equal " << '\n';
}


void cat()
{
    char a[30],b[30];int i,y,z=0;
    std::cout << "Enter the first string " << '\n';
    std::cin >> a;
    std::cout << "Enter the second string" << '\n';
    std::cin >> b;
    for (int i = 0; a[i] !='\0'; i++)
    {
        y=i;
    }
    y++;
    for (z=0; b[z]!='\0'; z++)
    {
        a[y]=b[z];
        y++;
    }
    std::cout << "The string after being copied is :" << '\n';
    for (i = 0; a[i] !='\0'; i++)
    {
        std::cout << a[i] ;
    }
}


void cpy()
{
    char a[30],b[30];int i,y=0,z;
    std::cout << "Enter the first string " << '\n';
    std::cin >> a;
    std::cout << "Enter the second string" << '\n';
    std::cin >> b;
    for (z=0; b[z]!='\0'; z++)
    {
        a[y]=b[z];
        y++;
    }
    std::cout << "The string after being copied is :" << '\n';
    for (i = 0; a[i] !='\0'; i++)
    {
        std::cout << a[i] ;
    }
}
/*
Output
Menu driven program using user defined functions
1. Find the length of the string
2. Find the reverse of the string
3. Compare two strings (case sensitive)
4. Concatanate two strings
5. Using copy function

Enter your choice  5
Enter the first string
Hello
Enter the second string
Akshay
The string after being copied is :
HelloAkshay
Do you want to continue (y/n)?
n
Okay then.... Thankyou
*/
