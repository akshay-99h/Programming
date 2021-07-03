#include <stdio.h>

double factorial(int);

int main()
{
    int number;
    double answer;
    printf("Enter the number you want to find the factorial of: ");
    scanf("%d",&number);
    answer=factorial(number);
    printf("The factorial of %d is %lf.", number, answer);
    return 0;
}

double factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}