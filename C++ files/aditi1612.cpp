//Program no.
#include "iostream.h"

void linear()
{
  int x, A[50], y, found=0;
  cout<<"Enter the size of the array"<<endl;
  cin>>x;
  cout<<"Enter the array"<<endl;
  for(int i=0;i<x;i++)
  {
    cin>>A[i];
  }
  cout<<"Enter the element you want to search for"<<endl;
  cin>>y;
  for(int j=0;j<x;j++)
  {
    if(A[j]==y)
    {
      cout<<"The position of the element is "<<(j+1);
      found++;
      break;
    }
  }
  if(found==0)
  cout<<"The element does not exist"<<endl;
}

void binary()
{
  int x, y, B[50], first, last, mid, found=0;
  first=last=mid=0;
  cout<<"Enter the size of the array"<<endl;
  cin>>x;
  cout<<"Enter the array"<<endl;
  for(int i=0;i<x;i++)
  {
    cin>>B[i];
  }
  cout<<"Enter the element you want to search for"<<endl;
  cin>>y;
  while(first<last)
  {
    mid=(first+last)/2;
    if(B[mid]==y)
    {
      cout<<"The position of the element is "<<(mid+1)<<endl;
      found++;
      break;
    }
    else if(B[mid]<y)
      first=(mid+1);
    else
      last=(mid-1);
  }
  if(found==0)
  cout<<"The element does not exist"<<endl;
}

int main()
{
  cout<<"\tSEARCHING FOR ELEMENTS"<<endl<<endl;
  int z;
  char ch;
  do
  {
    cout<<"MENU:-"<<endl;
    cout<<"1. Linear Search"<<endl;
    cout<<"2. Binary Search"<<endl;
    cout<<"3. Exit"<<endl<<endl;
    S:
    cout<<"Enter your choice"<<endl;
    cin>>z;
    cout<<endl;
    switch(z)
    {
      case 1:  cout<<"LINEAR SEARCH"<<endl;
               linear();
               break;

      case 2:  cout<<"BINARY SEARCH"<<endl;
               binary();
               break;

      case 3:  system("exit");

      default: cout<<"Wrong Input! Try Again."<<endl;
               goto S;
    }
    cout<<endl<<"Do you want to continue? (y/n)"<<endl;
    cin>>ch;
    cout<<endl;
  }while(ch=='y');
  return 0;
}

/*
         OUTPUT:-

     SEARCHING FOR ELEMENTS

MENU:-
1. Linear Search
2. Binary Search
3. Exit

Enter your choice
1

LINEAR SEARCH
Enter the size of the array
5
Enter the array
21
34
56
78
92
Enter the element you want to search for
56
The position of the element is 3

Do you want to continue? (y/n)
y

MENU:-
1. Linear Search
2. Binary Search
3. Exit

Enter your choice
2

BINARY SEARCH
Enter the size of the array
7
Enter the array
3
4
5
67
83
21
90
Enter the element you want to search for
45
The element does not exist

Do you want to continue? (y/n)
n
*/






































































































































































































































































































































































































