//Akshay:- Program 6

#include<iostream>
#include<stdio.h>
#include<string.h>


using namespace std;

 
class TRAIN

{
    public:
        long pno;
        int tno;
        char name[100];
        int age;
    	int fare;
    public:
        void accept()
        {
            cout<< "Enter the Passenger no. : ";
            cin >> pno;
            cout<< endl;
            cout<< "Enter the Train no. : ";
            cin >> tno;
            cout<< endl;
            cout<< "Enter the Passenger's Name: ";
            cin >> name;
            cout<< endl;
            cout<< "Enter the Age of the Passenger: ";
            cin >> age;
            cout<< endl;
        }

        int calc()
        {
            if(age<=12)
                fare=1000;
            else if(age>12&&age<=18)
                fare=1200;
            else if(age>18&&age<=30)
                fare=1500;
            else if(age>30&&age<=50)
                fare=1800;
            else if(age>50&&age<=60)
                fare=2000;
            else
                fare=2200;
            return fare;
        }

                                               

};

 

class FARE: public TRAIN

{

    public:

    	void show()

        {

            cout<<"The Fare for the Passenger is: "<<calc();

        }

               

};

 

int main()

{

    FARE F1;

    F1.accept();

    F1.show();

               

}

/*
Output:-

Enter the Passenger no. : 3

Enter the Train no. : 11731

Enter the Passenger's Name: Akshay

Enter the Age of the Passenger: 23

The Fare for the Passenger is: 1500

*/
