#include <stdio.h>

void henoiTower(int n, char from, char to, char aux)
{
    if(n==1)
    {
        printf("\n Move disk %d from rod %c to rod %c", n, from, to);
        return;
    }
    henoiTower(n-1, from, aux, to);
    printf("\n Move disk %d from rod %c to rod %c", n, from, to);
    henoiTower(n-1, aux, to, from); 
}

int main()
{
    int i=3;
    henoiTower(i,'A','B','C');
    return 0;
}