//Program 5 Akshay
#include <c++/4.2.1/backward/iostream.h>

int main() {
    char a;
    cout << "Enter a character "             ;
    cin  >> a                                            ;
    a++                                                    ;
    cout << '\t' << (char)a                       ;
    a++                                                    ;
    cout << '\t' << (char)a                       ;
    a ++                                                   ;
    cout << '\t' << (char)a                       ;
    a++                                                    ;
    cout << '\t' << (char)a                       ;
    a++                                                    ;
    cout << '\t' << (char)a                       ;
}
/*
Output:
1.Enter a character 1
	2	3	4	5	6
2.Enter a character A
	B	C	D	E
3.Enter a character a
	b	c	d	e
*/
