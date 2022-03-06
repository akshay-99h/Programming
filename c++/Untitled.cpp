#include <c++/4.2.1/backward/iostream.h>
int main(int argc, char const *argv[]) {
    std::cout << "Using increment and decrement operators " << '\n';
    int a,b,c;
    a=2;
    b=++a;
    c=--a;
    std::cout << a <<b<<c<< '\n';
    return 0;
}
