/*
 Copyrights @akshayproductions
 header file for simple arithmatical problems
 */
 #include <stdio.h>
double add(int a, int b)
{
    printf("Added value=%d\n", a + b);
}
double multiply(int a, int b)
{
    printf("Multiplied value=%d\n", a * b);
}
double devide(int a, int b)
{
    printf("Quotient=%d\n", a/b);
    printf("Remainder=%d\n", a%b);
}
double subtract(int a, int b)
{
    printf("Outcome=%d\n", a-b);
}
double square(int a)
{
    printf("Square of the number=%d\n", a*a );
}
double cube(int a)
{
    printf("Cube of the number=%d\n", a*a*a );
}
