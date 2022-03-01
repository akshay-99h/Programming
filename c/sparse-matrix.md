# Program 2b

## Sparse matrix by Akshay Prabhat Mishra

### Sourcecode

```c
#include<stdio.h>
int main()
{
   int i,m,n,j,t=0,f=0,v,y,x;
   printf("Enter the number of rows you want in the matrix: ");
   scanf("%d",&m);
   printf("Enter the number of columns you want in the matrix: ");
   scanf("%d",&n);
   int a[m][n];
   printf("Enter elements of matrix.\n");   
   for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
         printf("\nEnter the element at [%d][%d]: ",i,j);
         scanf("%d",&a[i][j]);
     };
  };
   for(i=0;i<m;i++)
   { 
     for(j=0;j<n;j++)
       {
           if (a[i][j]!=0)
         {
           t = 1 +t;
         };
       };

   };
   struct sparse
   {
     int row;
     int column;
     int value;
   };
   struct sparse store[t];
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(a[i][j]!=0)
           {
             store[f].row = i;
             store[f].column = j;
             store[f].value = a[i][j];
            f = 1 + f;
           };
       };
   };
    printf(" Row   :\t");
    for(j=0;j<t;j++)
    {
        v = store[j].row;
      printf("%d\t",v);
    };
    printf("\n Column:\t");
    for(j=0;j<t;j++)
    {
        y = store[j].column;
      printf("%d\t",y);
    };
    printf("\n Value :\t");
    for(j=0;j<t;j++)
    {
        x = store[j].value;
      printf("%d\t",x);
    };
}
```

### Output

```py
Enter the number of rows you want in the matrix: 4
Enter the number of columns you want in the matrix: 4
Enter elements of matrix.

Enter the element at [0][0]: 245

Enter the element at [0][1]: 62

Enter the element at [0][2]: 45

Enter the element at [0][3]: 75

Enter the element at [1][0]: 0

Enter the element at [1][1]: 0

Enter the element at [1][2]: 0

Enter the element at [1][3]: 0

Enter the element at [2][0]: 0

Enter the element at [2][1]: 0

Enter the element at [2][2]: 76

Enter the element at [2][3]: 83

Enter the element at [3][0]: 97

Enter the element at [3][1]: 0

Enter the element at [3][2]: 0

Enter the element at [3][3]: 0
 Row   :        0       0       0       0       2       2       3
 Column:        0       1       2       3       2       3       0
 Value :        245     62      45      75      76      83      97
```
