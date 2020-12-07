#include <iostream>
using namespace std;

int sum(int n)
{
    int ans = 0;
    ans=n*(n+1)/2;
    return ans;
}

int32_t main()
{
    int n;
    cin  >> n;
    cout << sum(n) << endl;
}