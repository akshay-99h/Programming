// Program-12 Akshay

#include <iostream.h>
#include <fstream.h>
#include <stdio.h>

class shop
{
	int sno;
	char name[25];
	float price;
	public:
		void getdata();
		void putdata();
		int no();
};

void shop::getdata()
{
	cout << "\n Enter item number :";
	cin  >> sno;
	cout << "\n Enter the name of the product :";
	gets(name);
	cout << "\n Enter price: ";
	cin  >> price;
}

void shop::putdata()
{
	cout << "\n\n Item number : " << sno;
	cout << "\n Name of the product: ";
	puts(name);
	cout << "\n Price: " << price;
}

int shop::no()
{
	return sno;
}

void main()
{
	shop s,st;
	ifstream f1("shop.dat", ios::in|ios::binary);
	ofstream f2("TE.dat", ios::out|ios::binary);
	char last='y';
	cout << " Enter the data to be inserted:- \n";
	s.getdata();
	while(f1)
	{
		f1.read((char*)&st, sizeof(st));
		if(s.no <=st.no)
		{
			f2.write((char*)&s, sizeof(s));
			last='n';
			break;
		}
		else
		{
			f2.write((char*)&st, sizeof(st));
		}
	}
	if(last=='y')
	f2.write((char*)&s,sizeof(s));
	else if(f)
	{
		while(f)
		{
			f.read((char*)&st,sizeof(st));
			f2.write((char*)&st,sizeof(st));
		}
	}
	f.close();
	f2.close();
	remove("shop.dat");
	rename("TE.dat","shop.dat");
	f1.open("shop.dat",ios::in);
	while(f1)
	{
		f.read((char*)&st,sizeof(st));
		if(f1) break;
		st.putdate();
	}
	f1.close();
}