//Program no.17  Aditi


#include "iostream.h"
void main()
{
  cout<<"\tSELECTION SORTING"<<endl<<endl;
  int A[10], i, j, temp, pos, small;
  cout<<"Enter the array"<<endl;
  for(int x=0;x<10;x++)
  {
    cin>>A[x];
  }
  cout<<endl;
  cout<<"The original array is:-"<<endl;
  for(int x=0;x<10;x++)
  {
    cout<<A[x]<<' ';
  }
  cout<<endl<<endl;
  for(i=0;i<9;i++)
  {
    small=A[i];
    pos=i;
    for(j=i+1;j<10;j++)
    {
      if(A[j]<small)
      {
        small=A[j];
        pos=j;
      }
    }
    temp=A[i];
    A[i]=A[pos];
    A[pos]=temp;
    cout<<"The array after iteration "<<(i+1)<<" is:-"<<endl;
    for(j=0;j<10;j++)
    {
      cout<<A[j]<<' ';
    }
    cout<<endl;
  }
  cout<<endl<<"The sorted array is:-"<<endl;
  for(i=0;i<10;i++)
  {
    cout<<A[i]<<' ';
  }

}


          OUTPUT:-

       SELECTION SORTING

  Enter the array
  60
  120
  108
  12
  36
  24
  72
  84
  48
  96

  The original array is:-
  60 120 108 12 36 24 72 84 48 96

  The array after iteration 1 is:-
  12 120 108 60 36 24 72 84 48 96
  The array after iteration 2 is:-
  12 24 108 60 36 120 72 84 48 96
  The array after iteration 3 is:-
  12 24 36 60 108 120 72 84 48 96
  The array after iteration 4 is:-
  12 24 36 48 108 120 72 84 60 96
  The array after iteration 5 is:-
  12 24 36 48 60 120 72 84 108 96
  The array after iteration 6 is:-
  12 24 36 48 60 72 120 84 108 96
  The array after iteration 7 is:-
  12 24 36 48 60 72 84 120 108 96
  The array after iteration 8 is:-
  12 24 36 48 60 72 84 96 108 120
  The array after iteration 9 is:-
  12 24 36 48 60 72 84 96 108 120

  The sorted array is:-
  12 24 36 48 60 72 84 96 108 120

