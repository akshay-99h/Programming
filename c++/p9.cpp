#include <c++/4.2.1/backward/iostream.h>
int main()
{
    char x;
    cout << "Enter any thing on the keyboard ";
    cin >> x ;

    if (( x >= 'a' && x<='z') || (x >= 'A' && x<='Z') )
    {
        cout <<"This is an alphabet\n";
    }
    else if ( x >= '0' && x<='9' )
    {
        cout <<"This is a number\n";
    }
    else
    {
        cout << "This is a special character " << '\n';
    }
    return 0;
}
