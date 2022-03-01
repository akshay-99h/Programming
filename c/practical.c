#include <stdio.h>
#include <stdlib.h>

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

void bubbleSort()
{
    int temp=0, n=0;
    printf(" Enter the number of elements you want in the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements in the array: ");

    int arr[n];

    for (int i = 0;  i!=n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n\tBubble Sort\n");
    printf("\n Sorted array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

 int main()
{
    int choice;
     do
    {    
        printf("\n\tMenu:\n");
        printf(" 1. Binary Search\n");
        printf(" 2. Bubble Sort\n");
        printf(" 3. Exit\n");
        printf(" Select what you want to do with your array: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                binary();
                break;
            case 2:
                bubbleSort();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while(choice!=3);
    return 0;
}

