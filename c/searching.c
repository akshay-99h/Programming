#include <stdio.h>

void linear()
{
    int n=0, element=0;
    printf(" Enter the number of elements you want in the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements in the array: ");

    int arr[n];

    for (int i = 0;  i!=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\n Enter the element you want to find the position of: ");
    scanf("%d",& element);

    for (int i = 0; i < n; i++) {
       if (arr[i]==element)
       {
           printf(" Element is found at position %d",(i+1));
           return;
       }
    }
    printf(" Element not found!");
}

void binary()
{
    int n=0, element=0, middle=0, first=0, last=0;
    printf(" Enter the number of elements you want in the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements in the array: ");

    int arr[n];

    for (int i = 0;  i!=n; i++)
    {
        scanf("%d",&arr[i]);
    }

    last=n;
    
    printf("\n Enter the element you want to find the position of: ");
    scanf("%d",&element);
    
    while(first<=last)
    {
        middle=(first+last)/2;
        if(arr[middle]==element)
        {
            printf(" Element is found at position %d",(middle+1));
            return;
        }
        else if(arr[middle]>element)
        {
            
            last=middle-1;
        }
        else{    
            first=middle+1;   
        }
        middle=(first+last)/2;
    }
    printf(" Element not found!");
}



int	main()
{
    int type=0;

    printf("\n\n\t Select the operation:\n");
    printf(" 1. Linear search\n");
    printf(" 2. Binary search\n");
    printf("\n\nSelect your choice(1/2): ");
    scanf("%d",&type);

    switch (type)
    {
      case 1:
        linear();
        break;
    
      case 2:
        binary();

      default:
        break;
    }

    return 0;
}