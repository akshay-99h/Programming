//Program 8 Akshay
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << " Even odd determiner \n";
    cout << " Enter a number ";
    cin   >> x;
    if (x%2==0){
        cout<<" "<<x<< " is an even number."<<endl;
    }
    else{
        cout<<" "<<x<< " is an odd number" <<endl;
    }
    return 0;
}
/*
Output:-
1.  Even odd determiner
    Enter a number 5
    5 is an odd number
2.  Even odd determiner
    Enter a number 6
    6 is an even number.
*/
