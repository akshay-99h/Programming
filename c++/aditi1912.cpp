//Program no.19  Aditi


#include<iostream.h>
#include<conio.h>
void main()
{
  cout<<"\tINSERTION SORTING"<<endl<<endl;
  int A[10], i, j, temp;
  cout<<"Enter the array"<<endl;
  for(int x=0;x<10;x++)
  {
    cin>>A[x];
  }
  cout<<endl;
  cout<<"The original array:-"<<endl;
  for(int y=0;y<10;y++)
  {
    cout<<A[y]<<' ';
  }
  cout<<endl;
  A[0]=INT_MIN;
  for(i=1;i<10;i++)
  {
    for(j=i-1;j<10;j--)
    {
      if(A[j]>A[j+1])
      {
        temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
      }
    }
    cout<<"The array after iteration "<<(j+1)<<" is:-"<<endl;
    for(j=0;j<10;j++)
    {
      cout<<A[j]<<' ';
    }
  }
  cout<<endl<<endl<<"The sorted array is:-"<<endl;
  for(j=0;j<10;j++)
  {
    cout<<A[j]<<' ';
  }

  getch();
}




















































