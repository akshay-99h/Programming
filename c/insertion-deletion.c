#include<stdio.h>

int main()
{   
    int i,n,k,l,t,b,D,num;
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
    printf("1) Insertion.\n ");
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
            {  
                if(a[i]==D)
                {
                  k  = i +1;
                };
            };
            for(i=k;i!=n;i++)
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