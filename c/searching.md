# Program to perform linear search and binary search on an array

## by Akshay Prabhat Mishra

```c
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
```

## Output

### Linear Search

```bash
abc@ABCs-MacBook-Pro Repos % cd "/Users/abc/Documents/Repos/Programming/c/" && gcc searching.c -o searching && "/Users/abc/Documents/Repos/Programming/c/"searching


         Select the operation:
 1. Linear search
 2. Binary search


Select your choice(1/2): 1
 Enter the number of elements you want in the array: 5

 Enter the elements in the array: 23
6
25
876
2

 Enter the element you want to find the position of: 2
 Element is found at position 5
```

### Binary Search

```bash
cd "/Users/abc/Documents/Repos/Programming/c/" && gcc searching.c -o searching && "/Users/abc/Documents/Repos/Programming/c/"searching


         Select the operation:
 1. Linear search
 2. Binary search


Select your choice(1/2): 2
 Enter the number of elements you want in the array: 7

 Enter the elements in the array: 7
12
14
16
19
24
45

 Enter the element you want to find the position of: 19
 Element is found at position 5
```
