//Program 19 Akshay
#include <iostream>

using namespace std;

void isort(int arr[],int size)
{
    int temp,j;
    arr[0]=INT_MIN;
    for(int i=1;i<=size;i++)
    {
        temp=arr[i];
        j=i-1;
        while(temp<arr[j])
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
    }
}
int main()
{
    int arr[50],size;
    cout<<"INSERTION SORT \n\n";
    cout<<"Enter size : ";
    cin>>size;
    cout<<"Enter Array \n";
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    isort(arr,size);
    cout<<"THE SORTED ARRAY IS AS FOLLOWS \n";
    for(int i=1;i<=size;i++)
        cout<<arr[i]<<" ";
    return 0;
}
/*
OUTUT:
INSERTION SORT

Enter size : 5
Enter Array
2
6
9
8
4
THE SORTED ARRAY IS AS FOLLOWS
2 4 6 8 9
*/



















































