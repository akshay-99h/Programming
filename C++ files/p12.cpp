//Program 12 Akshay
#include <iostream>
using namespace std;

int main() {
    int x=10;
    std::cout << "Even multiples of 3 between 10 & 50" << '\n';
    for (x; x<=50; x++) {
        if (x%2==0 && x%3==0) {
            std::cout << x << '\n';
        }
        else continue;
    }
    return 0;
}
/* OUTPUT
Even multiples of 3 between 10 & 50
12
18
24
30
36
42
48
*/
