# Practical 2a

## Insertion and Deletion by Akshay Prabhat Mishra

### Sourcecode

```c
#include<stdio.h>

int main()
{   
    int i,k,l,t,b,D,num;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&num);
    int a[100];
    for(i=0;i!=num;i++)
    {
        printf("write the element at position %d: ",(i+1));
        scanf("%d",&n);
        a[i] = n;
    };
    int flag=0;
    while (flag!=2)
    {
    printf("Select you choice:\n" );
    printf("1) Insertion and\n");
    printf("2) Deletion.\n");
    scanf("%d",&b);
     switch(b)
    {
        case 1:
            printf("\nEnter the desired element and its position: ");
            scanf("%d\n%d",&k,&l);
            for(t=num;t>=l;t--)
            {
              a[t] = a[t-1];
            };
            a[l-1] = k;
            for (l=0;l<=num;l++)
            {
               printf("%d\n",a[l]);
            };break;
        case 2:
            printf("\nEnter the element which you want to delete:\n");
            scanf("%d",&D);
            for(i=0;i<=num;i++)
            {  if(a[i]==D)
               {
                  k  = i +1;
               };
            };
            for(i=k;i!=num;i++)
            {
              a[i]= a[i+1];
            };
            printf("Array after deletion: \n");
            for (i=0;i<num;i++)
            {
               printf("%d\n",a[i]);
            };break;
        default:
            printf("Enter a valid value!");
    }   
    flag++;
    }
}
```

### Output

```py
Enter the number of elements you want in the array: 4
write the element at position 1: 23
write the element at position 2: 43
write the element at position 3: 56
write the element at position 4: 13
Select you choice:
1) Insertion and
2) Deletion.
1

Enter the desired element and its position: 27 2
23
27
43
56
13
Select you choice:
1) Insertion and
2) Deletion.
2

Enter the element which you want to delete:
13
Array after deletion: 
23
27
43
56
```
