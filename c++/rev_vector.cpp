#include"iostream.h"
int main() {
    int vector[10],i,p,y=1;
    do {
        std::cout << " Enter elements of vector (max 10)" << '\n';
        for (i =0; i < 10; i++) {
            std::cin >> vector[i];
        }
        std::cout << "The vector originally is as follows " << '\n';
        for (i = 0; i < 10; i++) {
            std::cout << " " <<vector[i]<< '\n';
        }
        for(i=0,p=10-1; i < 10/2; i++,p--)
        {
            vector[i]=vector[i]+vector[p];
            vector[p]=vector[i]-vector[p];
            vector[i]=vector[i]-vector[p];
        }
        std::cout << "The reverse vecter is in as follows " << '\n';
        for (i = 0; i < 10; i++) {
            std::cout << " "  <<vector[i] << '\n';
        }    } while(y=1);
    return 0;
}
