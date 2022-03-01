#include <stdio.h>
#include <stdlib.h>

void bubbleSort();
void selectionSort();
void insertionSort();

int array[100];
int size=0;

 int main()
{
    int choice;
    printf("\t\tPROGRAM TO IMPLEMENT DIFFERENT SORTING TECHNIQUES\n");
    printf("\n Enter your array size: ");
    scanf("%d", &size);
    printf("\n Enter your array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n\tMenu:\n");
    printf(" 1. Bubble Sort\n");
    printf(" 2. Insertion Sort\n");
    printf(" 3. Selection Sort\n");
    printf(" 4. Exit\n");
    printf(" Select what you want to do with your array: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            bubbleSort();
            break;
        case 2:
            insertionSort();
            break;
        case 3:
            selectionSort();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}

void bubbleSort()
{
    int temp;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\n\tBubble Sort\n");
    printf("\n Sorted array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
}

void insertionSort()
{
    int temp, j;
    for(int i=1; i<size; i++)
    {
        temp=array[i];
        for(j=i-1; j>=0 && array[j]>temp; j--)
        {
            array[j+1]=array[j];
        }
        array[j+1]=temp;
    }
    printf("\n\tInsertion Sort\n");
    printf("\n Sorted array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
}

void selectionSort()
{
    int min, temp;
    for(int i=0; i<size-1; i++)
    {
        min=i;
        for(int j=i+1; j<size; j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    printf("\n\tSelection Sort\n");
    printf("\n Sorted array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
}