
#include <iostream>
using namespace std;
/*
int main()
{
    int n=0, m=0,k=0;
    cout<<"Enter number of rows: ";
    cin>>m;
    (m%2==0)?n=m/2:n=(m/2)+1;

    for(int i=1, k=0; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout << " ";
        }
        while (k!= (2*i)-1)
        {
            cout<<"*"<<" ";
            k++;
        }
        cout<<endl;
        k=0;
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for(k=0; k<= (2 * (n-i)); k++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
        k = 0;
    }

    return 0;
}
*/

int main()
{
    int rown=0, k=0;
    cout << "Enter the number of rows: ";
    cin  >> rown;
    
    for (int i = 1; i <= 3; i++)
    {
        for (int j=1; j<=rown;j++)
        {
            k=(((i + j) % 4 == 0) || ((i == 2) && (j % 4 == 0)));
            if (k) cout << "*";
            else cout<<" ";
        }
        cout << endl;
    }
}