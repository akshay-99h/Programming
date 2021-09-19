#include <stdio.h>

int array[100], name, position, c, n,value;

void insertion()
{
    printf("Please enter the location where you want to insert an new element: ");
    scanf("%d", &position);
    
    printf("Please enter the value: ");
    scanf("%d", &value);
    
    for (c = n - 1; c >= position - 1; c--)    
        array[c+1] = array[c];
    
    array[position-1] = value;
    
    printf("Resultant array is:\n");
    
    for (c = 0; c <= n; c++)    
        printf("%d\n", array[c]);    
    
}

void deletion()
{
    printf("Enter the element you wish to delete: ");
    scanf("%d", &name);
    
    for (int i = 0; i < n; i++) {
       if (array[i]==name)
       {
           position=i;
           break;
       }
    }
   
    for ( c = position - 1 ; c < n ; c++ ) 
    array[c] = array[c+1];        
    
    printf("Resultant array is\n");
    
    for( c = 0 ; c < n - 1 ; c++ )        
    printf("%d\n", array[c]);        
}    


int main()
{
    int type=0;
    
    printf("\tProgram to display insertion and deletion in array:\n\n");
    printf(" Enter number of elements in the array: ");
    scanf("%d", &n);
    
    printf(" Enter %d elements: ", n);
    
    for (c = 0; c < n; c++)    
        scanf("%d", &array[c]);
    
    do
    {
    printf("\n\n\t SELECT OPERATION:\n");
    printf("1. INSERTION\n");
    printf("2. DELETION\n");
    printf("3. EXIT\n");
    printf("\n\nSELECT YOUR CHOICE'S NUMBER: ");
    scanf("%d",&type);

    switch(type)
    {
        case 1:
        insertion();
        break;

        case 2:
        deletion();

        case 3:
        return 0;

        default:
        break;    
    }
        
    } while(1);
    
    return 0;
}