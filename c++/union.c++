#include "bits/stdc++.h"
using namespace std;

union test
{
    int a;
    char b[4];
};

int	main()
{
    test x;
    x.a=25;
    cout<<x.b[0]<<x.b[1]<<x.b[2]<<x.b[3]<<x.a;
    return 0;
}
