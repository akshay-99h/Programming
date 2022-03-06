#include <stdio.h>

int checkPrime(int);

int main(int argc, char const *argv[])
{
    int first=0, second=0;
    char conti='y';
    int flag=0;
    do{
        printf("\n\tEnter two numbers: ");
        scanf("%d %d", &first, &second);
        printf("\n\tThe prime numbers between %d and %d are: ", first, second);
        if(first<=2) printf(" 2 3");

        for (int i=first; i!=second; i++)
        {
            flag=checkPrime(i);
            if (flag==1){
                printf(" %d",i);
            }
        }
        
        printf("\n\nDo you want to continue?(y/n): ");
        scanf("%s",&conti);
    }while(conti=='y');
    return 0;
}

int checkPrime(int n)
{
    int flag=0;
    for(int i=2; i<=n/2; i++)
    {
        if (n%i==0)
        {
            flag=0; break;
        }
        else
        {
            flag=1; continue;
        }
    }
    return flag;
}