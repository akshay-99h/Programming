// Program no. 6
// Akshay Prabhat Mishra

#include<iostream.h>
#include<string.h>
#include<stdio.h>

class info
	{
		protected:
		int tno;
		char tname[40];
		float price;
	};

class desti
	{
		protected:
		char dname[40];
		char tim[40];
	};

class TRAIN:protected info,protected desti
	{
		public:
		TRAIN();
		{
			tno=1023;
			strcpy(tname,"RAJDHANI");
			price=5000;
		}

		TRAIN(char x[40],char y[40])
		{
			strcpy(dname,x);
			strcpy(tim,y);
		}

		void print()
		{
			cout << "*********************************************";
			cout << "\n Train Info :-";
			cout << "\n Train Number: " << tno;
			cout << "\n Train Name  : "; puts(dname);
			cout << "\n Price       : " << price;
		}

		void tprint()
		{
			cout << "\n Destination : " << dname;
			cout << "\n Timing      : " << tim;
		}
	};

void main()
{
	TRAIN T;
	char
}



