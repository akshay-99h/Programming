// Akshay 41
#include "iostream.h"
#include <string.h>

struct date{
    int dd,mm,yyyy;
};

struct picnic{
    date dates;
    char destination[20];
    float fees;
};

int main() {
    char y; picnic place[100]; int x, n=0,z=0,i;
    do {
        std::cout << " Program 41- Picnic" << '\n';
        std::cout << " Enter the number of places you want to enter : " ; std::cin >> x;
        for (i = 0; i < x; i++) {
            std::cout << "\n Enter destination : " ; scanf("%[^\n]s ",place[i].destination);
            std::cout << "\n Enter date : " ; std::cin >> place[i].dates.dd;
            std::cout << "\n Enter month : " ; std::cin >> place[i].dates.mm;
            std::cout << "\n Enter year : " ; std::cin >> place[i].dates.yyyy;
            std::cout << "\n Enter fees : " ; std::cin >> place[i].fees;
            if (strcmp(place[i].destination,"goa")==0) {
                n=1;z=i;
            }
        }
        if (n==1) {
            std::cout << " Goa is found " << '\n';
            std::cout << " The details are :-" << '\n';
            std::cout << " Date : " <<place[z].dates.dd << '\n';
            std::cout << " Month : " <<place[z].dates.mm << '\n';
            std::cout << " Year : " <<place[z].dates.yyyy << '\n';
            std::cout << " Fees : " << place[z].fees<< '\n';
        }
        else std::cout << " Goa not found " << '\n';
        std::cout << " Do you want to continue (y/n) ? ";
        std::cin >> y;
    } while(y=='y');
    return 0;
}

/*
Output:-

*/
