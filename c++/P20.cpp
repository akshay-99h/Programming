//Program 20 Akshay
#include<iostream> 
using namespace std; 
  
void merge(int A[],int M,int B[],int N, int C[])
{
	int a,b,c;
	for(a=0,b=-1,c=0;(a<M)&&(b>=0);)
	{
		if(A[a]<=B[b])
		C[c++]=A[a++];
		else
		C[c++]=B[b--];
	}
	if(a<M)
	{
		while(a<M)
		C[c++]=A[a++];
	}
	else
	{
		while(b>=0)
		C[c++]=B[b--];
	}
}

int main()
{
	int A[50], B[50], C[50], MN=0, M, N;
	cout<<"HOW MANY ELEMENTS DO YOU WANT TO ENTER : ";
	cin>>M;
	cout<<"ENTER FIRST ARRAY IN ASCENDING ORDER \n";
	for(int i=0;i<M;i++)
	{
		cin>>A[i];
	}
	cout<<"HOW MANY ELEMENTS DO YOU WANT TO ENTER IN SECOND ARRAY : ";
	cin>>N;
	cout<<"ENTER SECOND ARRAY IN DESCENDING ORDER \n";
	for(int j=0;j<N;j++)
	{
		cin>>A[j];
	}
	MN=M+N;
	merge(A,M,B,N,C);
	cout<<"THE MERGED ARRAY IS AS BELOW : \n";
	for(int k=0;k<MN;k++)
	{
		cout<<C[k]<<" ";
	}
	cout<<endl;
}
/*
OUTPUT-
HOW MANY ELEMENTS DO YOU WANT TO ENTER : 5
ENTER FIRST ARRAY IN ASCENDING ORDER
2
4
5
7
8
HOW MANY ELEMENTS DO YOU WANT TO ENTER IN SECOND ARRAY : 2
ENTER SECOND ARRAY IN DESCENDING ORDER
9
3
THE MERGED ARRAY IS AS BELOW :
2 3 4 5 7 8 9
*/
