#include <stdio.h>
#include <stdlib.h>


int main()
{
    int size=0; float sum=0, avg=0;
    printf(" Enter the size of the array: %d", size);
    char arr[size];

    for(int i=0; i!=size; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }

    FILE *ptr;

    ptr = fopen("data/array.txt", "w");
    if(ptr == NULL)
    {
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter contents to store in file : \n");
    fgets(arr, size, stdin);
    fputs(arr, ptr);
    fclose(ptr);
    printf("File created and saved successfully. \n");
    for(int i=size-1; i>=0; i--)
    {
        printf("%d", &arr[i]);
        avg=sum/size;
        sum-=arr[i];
        printf("%d", sum);
        printf("%d", avg);
    }
    return 0;
}