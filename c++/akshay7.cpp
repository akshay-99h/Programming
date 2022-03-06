//Akshay
//Program 7: To find the size of a data file

#include <iostream>
#include <fstream>
using namespace std;

int main () {
    int begin,end;
    ifstream myfile ("hello.bin", ios::binary);
    begin = myfile.tellg();
    myfile.seekg (0, ios::end);
    end = myfile.tellg();
    myfile.close();
    cout << "size is: " << (end-begin) << " bytes.\n";
    return 0;
}
