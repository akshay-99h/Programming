#include <stdio.h>

void add();
void sub();
void triag();
void tran();
void prod();

int main()
{
    for(int i=0; i!=50; i++)
        printf("*");
    printf("\n\n\t Program to do operations on Matrices\n\n");
    for(int i=0; i!=50; i++)
        printf("*");
    int choice=0;
    char ans;
    int conti=0;
    do{
        printf("\n\n\t List of operations:\n");
        printf("\n\t1. Addition of two matrices");
        printf("\n\t2. Subtraction of two matrices");
        printf("\n\t3. Finding upper and lower triangular matrices");
        printf("\n\t4. Transpose of a matrix");
        printf("\n\t5. Product of two matrices");
        printf("\n\n Enter the number of your desired operation: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            triag();
            break;
        case 4:
            tran();
            break;
        case 5:
            prod();
            break;
        default:
            break;
        }
        printf("\n");        
        for(int i=0; i!=50; i++)
        printf("*");
        printf("\n\n\nDo you want to continue? (y/n): ");
        scanf("%c", &ans);
        printf("\n");
        for(int i=0; i!=50; i++)
        printf("*"); printf("\n\n\n");
        if (ans=='n')
        {
            conti=0;
        }
        else conti=1;
    }while (conti);
    return 0;
}


void add()
{
    int x=0;
    printf("\n\n Enter the order of the square matrices: ");
    scanf("%d",&x);
    int arr1[x][x];
    int arr2[x][x];
    printf("\n\n Enter the elements in the first matrix:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\tEnter the element at [ %d ][ %d ]: ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n\n The first matrix is: \n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\n\tElement at [%d][%d] is: %d",i,j,arr1[i][j]);
        }
    }
    printf("\n\nEnter the elements in the second matrix:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n\n The second matrix is: \n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\n\tElement at [%d][%d] is: %d",i,j,arr2[i][j]);
        }
    }
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            arr1[i][j]+=arr2[i][j];
        }
    }
    printf("\n The matrix after summation:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\n\tElement at [%d][%d] is: %d",i,j,arr1[i][j]);
        }
    }
}


void sub()
{
    int x=0;
    printf("\n\n Enter the order of the square matrices: ");
    scanf("%d",&x);
    int arr1[x][x];
    int arr2[x][x];
    printf("\n\n Enter the elements in the first matrix:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n\n The first matrix is: \n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\n\tElement at [%d][%d] is: %d",i,j,arr1[i][j]);
        }
    }
    printf("\n\nEnter the elements in the second matrix:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n\n The second matrix is: \n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\n\tElement at [%d][%d] is: %d",i,j,arr2[i][j]);
        }
    }
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            arr1[i][j]-=arr2[i][j];
        }
    }
    printf("\n The matrix after subtraction is:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\n\tElement at [%d][%d] is: %d",i,j,arr1[i][j]);
        }
    }
}


void triag()
{
    int x=0;
    printf("\n\n Enter the order of the square matrices: ");
    scanf("%d",&x);
    int arr[x][x];
    printf("\n\n Enter the elements in the first matrix:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n The matrix is: \n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\n\tElement at [%d][%d] is: %d",i,j,arr[i][j]);
        }
    }
    printf("\n The upper triangle is:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            if((i+j)<=(x+1))
            {
                printf("\n\tElement at [%d][%d] is: %d",i,j,arr[i][j]);
            }
        }
    }
    printf("\n The lower triangle is:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            if((i+j)>=(x+1))
            {
                printf("\n\tElement at [%d][%d] is: %d",i,j,arr[i][j]);
            }
        }
    }
}

void tran()
{
    int x=0;
    printf("\n\n Enter the order of the square matrices: ");
    scanf("%d",&x);
    int arr[x][x];
    printf("\n\n Enter the elements in the first matrix:\n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\tEnter the element at [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n The matrix is: \n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\n\tElement at [%d][%d] is: %d",i,j,arr[i][j]);
        }
    }
    printf("\n\n The transpose matrix is: \n\n");
    for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != x; j++)
        {
            printf("\n\tElement at [%d][%d] is: %d",i,j,arr[j][i]);
        }
    }
}

void prod()
{
    int m, n, p, q, i, j, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];
    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);
    if (n != p)
    printf("Matrices with entered orders can't be multiplied with each other.\n");
    else
    {
        printf("Enter the elements of first matrix\n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &first[i][j]);
        printf("Enter the elements of second matrix\n");
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &second[i][j]);
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++)
            {
                multiply[i][j]=0;
        for (k = 0; k < p; k++)
        {
            multiply[i][j] = multiply[i][j] + first[i][k]*second[k][j];
        }
    }
}
printf("Product of entered matrices:-\n");
for (i = 0; i < m; i++) {
for (j = 0; j < q; j++)
printf("%d\t", multiply[i][j]);
printf("\n");
}
}
}