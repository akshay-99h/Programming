//Akshay
//Program 7: To find the size of a data file

#include <stdio.h>
#include <fstream.h>


void main () {
	 char txt[100],x;
	 int size=0;

	 ofstream myfile ("hello.txt", ios::out);
	 cout << " Enter your string : ";
	 gets(txt);

	 for(int i=0; i!='\0' ; i++)
	 {
		myfile << txt[i];
	 }
	 myfile.close();

	 cout << " The file in reading mode: ";

	 ifstream file ("hello.txt");
	 while(file)
	 {
		file >> x;
		cout << x;
		size++;
	 }
	 file.close();

	 cout << " The size of the file is: " << (size) << " bytes.\n";
}
