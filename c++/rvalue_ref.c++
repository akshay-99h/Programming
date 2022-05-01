#include <iostream>
using namespace std;

void getr(string &&a)
{
	cout<<a;
}

int main()
{
	getr("Hello");
}
