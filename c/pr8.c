#include <stdio.h>
#include <stdlib.h>

char A[100];
char B[100];

void single_input()
{
    printf("Enter the string: ");
    getchar();
    fgets(A, 100, stdin);
}

void double_input()
{
    printf("Enter the first string: ");
    getchar();
    fgets(A, 100, stdin);
    printf("Enter the second string: ");
    fgets(B, 100, stdin);
}

int len(char arr[])
{
    int i = 0;
    for (i = 0; arr[i] != '\0'; i++)
        ;
    return i;
}

void cat()
{
    int size1 = len(A);
    int size2 = len(B);
    int count = size1 + size2 - 1;

    for (int i = (size1-1), j = 0; i <= count; i++, j++)
    {
        A[i] = B[j];
    }

    printf("The string after concatation is: ");
    puts(A);
}

void rev()
{
    int size = len(A);

    for (int i = 0; i != size; i++)
    {
        B[size - i - 2] = A[i];
    }
    B[size - 1] = '\0';

    printf("String after reversal: ");
    puts(B);
}

void cpy()
{
    int size1 = len(A);
    int size2 = len(B);

    for (int i = 0; B[i]!='\0'; i++)
    {        
        if(i==size2-1) break;
        if (size1>size2)
        {
            A[i] = B[i];
        }
        else
        {
            printf("Error! the second string is bigger than the first one.");
            break;
        }
        
    }
    printf("First string after copy: ");
    puts(A);
}

int main()
{
    int choice = 0;
    int le = 0;

    printf("\n\tMENU\n");
    printf("\n\n1. Find the length of the string.\n");
    printf("2. Concatanate two strings.\n");
    printf("3. Find the reverse of the string.\n");
    printf("4. Copy one string to another.\n");

    printf("\n\nEnter the desired choice number: ");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        single_input();
        le = len(A);
        printf("\nLength of the string is: %d", le);
        break;
    case 2:
        double_input();
        cat();
        break;
    case 3:
        single_input();
        rev();
        break;
    case 4:
        double_input();
        cpy();
        break;
    default:
        printf("Wrong value entered. Program terminating...\n\n");
        exit(0);
    }

    return 0;
}
