#include<iostream>
using namespace std;


int main()
{
int a,b,rem,chr,ch;
char c,d;
cout<<"\n Choose any operation among the following to be performed:";
cout<<"\n 1. Add 2 integers \n 2. Subtract 2 integers \n 3. Multiply 2 integers ";
cout<<"\n 4. Divide 2 integers \n 5. divide by 0 \n 6. Add 2 characters";
cout<<"\n 7. Subtract 2 characters  \n 8. Multiply 2 characters \n 9. Divide 2 characters \n";
cin>>ch;
if(ch>0 && ch<5)
{
cout<<"\n enter 2 integers a & b:";
cin>>a>>b;
 }
 else if (ch==5)
 {
 cout<<"\n Enter the integer";
 cin>>a;
 }
 else if(ch>5 && ch<10)
 {
 cout<<"\n Enter 2 characters :";
 cin>>c>>d;
 }

 switch(ch)
 {
 case 1: cout<<"\n Sum is :"<<a+b;
 break;
 case 2:cout<<"\n Difference is :"<<a-b;
 break;
 case 3:cout<<"\n Product is :"<<a*b;
 break;
 case 4:cout<<"\n Quotient is :"<<a/b;
 cout<<"\n Remainder is :"<<a%b;
 break;
 case 5:cout<<"\n Can't perform division!";
 break;
 case 6:chr=c+d;
 cout<<"\n Sum after char addition :"<<chr;
 break;
 case 7:chr=c-d;
 cout<<"\n Difference after char subtraction :"<<chr;
 break;
 case 8:chr=c*d;
 cout<<"\n Product of char multiplication :"<<chr;
 break;
 case 9:chr=c/d;
 rem=c%d;
 cout<<"\n Quotient after char division :"<<chr;
 cout<<"\n Remainder after char division :"<< rem;
 break;
 default: cout<<"\n Invalid choice! try again.";
 }
 return 0;
 }