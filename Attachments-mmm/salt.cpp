#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <process.h>
#include <iomanip>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <process.h>

using namespace std;


int a = 0;

struct Chemical
{
	char reagVal[50];
	Chemical *link;

/*
	Holds integer value correlating to const value for specific reagent
*/
};

class Salt
{
private:
	static int n_Anion;
	static int n_Cation;

public:

	static char CATION[12][20];
	static char ANION[11][10];

	static int GenerateRandomAnion();
	static int GenerateRandomCation();
	static char* getAnion(int);
	static char* getCation(int);

/*
	1. Abstract class
	2. Stores all cation and anions
*/
};

char Salt::CATION[12][20] = {"Aluminium","Ammonium","Barium","Calcium","Copper","Ferric","Lead","Magnesium","Manganese","Nickel","Strontium","Zinc"};
char Salt::ANION[11][10] = {"Nitrate","Phosphate","Acetate","Bromide","Chloride","Sulphate","Oxalate","Carbonate","Iodide","Sulphide","Sulphite"};

char* Salt::getAnion(int ANIONS)
{
	return ANION[ANIONS];
}

char* Salt::getCation(int CATIONS)
{
	return CATION[CATIONS];
}

int Salt::GenerateRandomAnion()
{
    srand(time(NULL));
	return rand() % (n_Anion);
}

int Salt::GenerateRandomCation()
{
    srand(time(NULL));
	return rand() % (n_Cation);
}

int Salt::n_Cation = 12;
int Salt::n_Anion = 10;

class ReagentQueue : public Salt
{
private:
	char ctr[10];
	Chemical *rear;
	Chemical *rev;
	Chemical *link;

public:
	int num;
	Chemical *front;
	Chemical *trav;

	ReagentQueue()
	{
		front = NULL;
		rear = NULL;
		trav = NULL;
		num = 0;
	}

	void add();
	Chemical* getFront();
	void add(char[][100], int);
	void del();
	void ClearQueue();
	char* traverse();
	void display(Chemical *a);
/*
	1. Consists of general implementation of linked list queue with operations such as add, delete and traverse.
	2. It is used to hold a list of type 'Chemical' which serves as a list of reagents.
*/
};

Chemical* ReagentQueue::getFront()
{
    return front;
}

void input(Chemical *a)
{
	cout<<"Enter data (chemical formula or name [eg: Copper Turnings], as specified in manual): ";
	cin.ignore();
	cin.getline(a->reagVal, 50, '\n');
	cout<<'\n';
}

void ReagentQueue::add()
{
	Chemical *np = new Chemical();

	if(np==NULL)
	{
		cout<<"No memory";
		exit(0);
	}

	np->link=NULL;
	input(np);

	if(front==NULL)
	{
		front = np;
		rear = np;
		trav = np;
	}
	else
	{
		rear->link=np;
		rear=np;
	}

	cout << "Reagent has been added!";

	num++;
}

void ReagentQueue::add(char Reag[][100], int n = 1)
{
   for(int i = 0; i < n; i++)
    {
		Chemical *np = new Chemical();
		
		if(np==NULL)
		{
			cout<<"No memory";
			exit(0);
		}
		
		np->link=NULL;
    	strcpy(np->reagVal, Reag[i]);
    
	    if(front==NULL)
        {
            front=np;
            rear=np;
            trav = np;
        }

        else
        {
            rear->link=np;
            rear=np;
        }
        num++;
    }
}

void ReagentQueue::del()
{
	Chemical *temp = front;

	if(front == rear)
		front = rear = NULL;
    else
        front = front -> link;
	delete temp;
}

char* ReagentQueue::traverse()
{
	return trav -> reagVal;
	trav = trav -> link;
}

void ReagentQueue::display(Chemical *a)
{
	cout<<a->reagVal<<" ";
}

void ReagentQueue::ClearQueue()
{
	while(front != NULL)
	{
		del();
	}
}

int CompareReagent(ReagentQueue userQ, ReagentQueue testQ)
{
	
	int i = 0;
	int count  = 0;
	char* userQVal = "empty";
	char* testQVal = "empty";

	int flag = 0;

	if(userQ.num == testQ.num)
	{

        count = userQ.num;
        
        Chemical* np1 = NULL;
        Chemical* np2 = NULL;
        
        np1 = testQ.getFront();
        np2 = userQ.getFront();
		while(np1 != NULL)
		{
	    	(testQVal = np1 -> reagVal);
			(userQVal = np2 -> reagVal);

			if(strcmp(testQVal, userQVal) != 0)
			{
				flag = 1;
				break;
			}

	    	np1 = np1 -> link;
	    	np2 = np2 -> link;
		}
		
		if (flag == 1)
			return 0;

		else
			return 1;
	}
	else
        return 0;
}

class UserModel
{
	public:
	ReagentQueue curr;
	int ANION, CATION;
	char observations[100][100];
	int a;

	UserModel()
	{
		generate();
		a = 0;
	}
	void generate();

	void addReagent();
	void viewQueue();
	void removeReagent();
	void displaySalt();
};

void UserModel::generate()
{
	ANION = Salt::GenerateRandomAnion();
	CATION = Salt::GenerateRandomCation();
}

void UserModel::addReagent()
{
	curr.add();
}

void UserModel::removeReagent()
{
	curr.del();
}

void UserModel::viewQueue()
{
	Chemical *np =  new Chemical();
	np = curr.getFront();
	while(np != NULL)
	{
		curr.display(np);
		np = np->link;
	}
}

void UserModel::displaySalt()
{
	system("cls");
	cout<<"Salt:\nAnion: "<<Salt::getAnion(ANION)<<"\nCation: "<<Salt::getCation(CATION)<<'\n';
	getch();
}

void prelims(UserModel &VirtUser)
{
	cout<<"Execute preliminary tests\n";
	if((VirtUser.CATION +  1)==5||(VirtUser.CATION +  1)==6||(VirtUser.CATION +  1)==9||(VirtUser.CATION +  1)==10)
	{
		if((VirtUser.CATION +  1)==5)
			strcpy(VirtUser.observations[VirtUser.a++],"Colour: Blue");

		else if((VirtUser.CATION +  1)==6)
			strcpy(VirtUser.observations[VirtUser.a++],"Colour: Brown");

		else if((VirtUser.CATION +  1)==9)
			strcpy(VirtUser.observations[VirtUser.a++],"Colour: Pink");

		else if((VirtUser.CATION +  1)==10)
			strcpy(VirtUser.observations[VirtUser.a++],"Colour: Green");
	}
    else
        strcpy(VirtUser.observations[VirtUser.a++],"Colourless");

	if((VirtUser.CATION +  1)==2||(VirtUser.ANION + 1) ==3||(VirtUser.ANION + 1) ==10)
	{
		if((VirtUser.CATION +  1)==2)
			strcpy(VirtUser.observations[VirtUser.a++],"Smell: Ammonical");

		else if((VirtUser.ANION + 1) ==3)
			strcpy(VirtUser.observations[VirtUser.a++],"Smell: Vinegar");

		else if((VirtUser.ANION + 1) ==10)
			strcpy(VirtUser.observations[VirtUser.a++],"Smell: Rotten Eggs");
	}
	else
        strcpy(VirtUser.observations[VirtUser.a++],"Odourless");


	if(!(VirtUser.CATION +  1)==7)
	{
		if(!(VirtUser.CATION +  1)==7)
		{
			strcpy(VirtUser.observations[VirtUser.a++],"Insoluble in Water");
			strcpy(VirtUser.observations[VirtUser.a++],"Insoluble in HCL");
		}
	}
	else
	{
		strcpy(VirtUser.observations[VirtUser.a++],"Soluble in Water");
		strcpy(VirtUser.observations[VirtUser.a++],"Soluble in HCl");
    }


	if((VirtUser.CATION +  1)==3||(VirtUser.CATION +  1)==4||(VirtUser.CATION +  1)==5||(VirtUser.CATION +  1)==6||(VirtUser.CATION +  1)==11)
	{
		if((VirtUser.CATION +  1)==3)
			strcpy(VirtUser.observations[VirtUser.a++],"Apple Green Flame");

		else if((VirtUser.CATION +  1)==4)
			strcpy(VirtUser.observations[VirtUser.a++],"Brick Red Flame");

		else if((VirtUser.CATION +  1)==5)
			strcpy(VirtUser.observations[VirtUser.a++],"Blue Green Flame");

		else if((VirtUser.CATION +  1)==11)
			strcpy(VirtUser.observations[VirtUser.a++],"Crimson Red Flame");
	}
    else
        strcpy(VirtUser.observations[VirtUser.a++],"No Characteristic flame");
}


void DilAcid(UserModel &VirtUser)
{
	cout<<"Execute Dilute Acid Test\n";
	if((VirtUser.ANION + 1) ==6||(VirtUser.ANION + 1) ==8||(VirtUser.ANION + 1) ==10)
	{
		if((VirtUser.ANION + 1) ==6)
			strcpy(VirtUser.observations[VirtUser.a++],"Colourless gas,smell like that of burning sulphur,turns acidified pot dichromate paper green.");

		else if((VirtUser.ANION + 1) ==8)
			strcpy(VirtUser.observations[VirtUser.a++],"Brisk effervescence is noted.A colourless odourless gas turning lime water milky is evolved.");

		else if((VirtUser.ANION + 1) ==10)
			strcpy(VirtUser.observations[VirtUser.a++],"Colourless gas with the smell of rotten eggs.Turns lead acetate paper black.");
	}
    else
        strcpy(VirtUser.observations[VirtUser.a++],"Absence of Carbonate,Sulphide,Sulphate ions");
}


void ConcAcid(UserModel &VirtUser)
{
	cout<<"Execute Conc Acid Test\n";
	if((VirtUser.ANION + 1) ==1||(VirtUser.ANION + 1) ==3||(VirtUser.ANION + 1) ==4||(VirtUser.ANION + 1) ==5||(VirtUser.ANION + 1) ==7||(VirtUser.ANION + 1) ==9)
	{
		if((VirtUser.ANION + 1) ==1)
			strcpy(VirtUser.observations[VirtUser.a++],"Slight brown fumes turning FeSO4 solution black");

		else if((VirtUser.ANION + 1) ==3)
			strcpy(VirtUser.observations[VirtUser.a++],"Colourless gas with a smell of vinegar which turns moist blue litmus paper red is evolved");

		else if((VirtUser.ANION + 1) ==4)
			strcpy(VirtUser.observations[VirtUser.a++],"Reddish brown gas which turns moist starch Iodide paper blue");

		else if((VirtUser.ANION + 1) ==5)
			strcpy(VirtUser.observations[VirtUser.a++],"Colourless gas with a irritating smell which gives dense white fumes when a glass rod dipped in Ammonium Hydroxide is introduced");

		else if((VirtUser.ANION + 1) ==7)
			strcpy(VirtUser.observations[VirtUser.a++],"Colourless gas which turns lime water milky");

		else if((VirtUser.ANION + 1) ==9)
			strcpy(VirtUser.observations[VirtUser.a++],"Violet vapours which turn moist starch paper blue black");
	}
    else
        strcpy(VirtUser.observations[VirtUser.a++],"Absence of Chloride,Bromide,Iodide,Oxalate,Nitrate,Acetate ions");
}

void ConfirmAcidRadical(UserModel &VirtUser)
{
	ReagentQueue reag = ReagentQueue();

	cout<<"Execute Confirmatory Tests For Acid Radical\n";

	if((VirtUser.ANION + 1) ==1||(VirtUser.ANION + 1) ==2||(VirtUser.ANION + 1) ==3||(VirtUser.ANION + 1) ==4||(VirtUser.ANION + 1) ==5||(VirtUser.ANION + 1) ==6||(VirtUser.ANION + 1) ==7||(VirtUser.ANION + 1) ==9||(VirtUser.ANION + 1) ==10||(VirtUser.ANION + 1) ==11)
	{
		if((VirtUser.ANION + 1) == 1)
		{
			reag.ClearQueue();
			reag.add(new char[2][100]{"H2SO4","Copper Turnings"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"The solution turns green and there is profuse evolution of brown fumes which turn FeSO4 sol black");

			reag.ClearQueue();
			reag.add(new char[2][100]{"H2SO4","Paper Pellets"}, 2);
			if(CompareReagent(VirtUser.curr, reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Profuse evolution of brown fumes which turn FeSO4 sol black");

			reag.ClearQueue();
			reag.add(new char[2][100]{"FeSO4","Conc H2SO4"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"A brown ring is formed at the junction of two liquids");
		}

		else if((VirtUser.ANION + 1) ==2)
		{
			reag.ClearQueue();
			reag.add(new char[2][100]{"Conc HNO3","Ammonium Molybdate"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Canary yellow ppt is formed");

			reag.ClearQueue();
			reag.add(new char[1][100]{"Magnesia Mixture"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"White ppt is obtained");
		}

		else if((VirtUser.ANION + 1) ==3)
		{
			reag.ClearQueue();
			reag.add(new char[2][100]{"Conc H2SO4","C2H5OH"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"A pleasent fruity smell of ester is got");

			reag.ClearQueue();
			reag.add(new char[1][100]{"Neutral FeCl3"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Red colour is formed");
		}

		else if((VirtUser.ANION + 1) ==4)
		{
			reag.ClearQueue();
			reag.add(new char[2][100]{"MnO2","H2SO4"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Reddish brown vapours turning moist starch paper yellow and moist starch iodide paper blue is evolved");

			reag.ClearQueue();
			reag.add(new char[2][100]{"Chlorine Water","CCl4"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Orange brown organic layer is formed");

			reag.ClearQueue();
			reag.add(new char[1][100]{"AgNO3"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Straw coloured ppt formed which is partly soluble in NH4OH");
		}

		else if((VirtUser.ANION + 1) ==5)
		{
			reag.ClearQueue();
			reag.add(new char[4][100]{"Potassium Dichromate","Conc H2SO4","CH3COOH","(CH3COO)2Pb"}, 4);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Yellow ppt is obtained");

			reag.ClearQueue();
			reag.add(new char[1][100]{"AgNO3"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Curdy white ppt fully soluble in excess of NH4OH");

			reag.ClearQueue();
			reag.add(new char[2][100]{"MnO2","Conc H2SO4"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Greenish yellow gas is evolved");
		}

		else if((VirtUser.ANION + 1) ==6)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"BaCl2"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"A white ppt insoluble in conc HCL is obtained");

			reag.ClearQueue();
			reag.add(new char[2][100]{"CH3COOH","(CH3COO)2Pb"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"White ppt soluble in excess of (CH3COO)NH4 is formed");
		}

		else if((VirtUser.ANION + 1) ==7)
		{
			reag.ClearQueue();
			reag.add(new char[2][100]{"CH3COOH","CaCl2"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"White ppt is obtained");

			reag.ClearQueue();
			reag.add(new char[2][100]{"Dil H2SO4","KMnO4"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Pink colour of KMnO4 is decolourised and CO2 is evolved");
		}

		else if((VirtUser.ANION + 1) ==9)
		{
			reag.ClearQueue();
			reag.add(new char[2][100]{"MnO2","H2SO4"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Violet vapours which turn moist starch paper blue is obtained");

			reag.ClearQueue();
			reag.add(new char[2][100]{"Chlorine Water","CCl4"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Pink organic layer is obtained");

			reag.ClearQueue();
			reag.add(new char[1][100]{"AgNO3"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Yellow ppt completely insoluble in NH4OH is got");
		}

		else if((VirtUser.ANION + 1) ==10)
		{
			reag.ClearQueue();
			reag.add(new char[2][100]{"CH3COOH","(CH3COO)2Pb"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Black ppt is formed");

			reag.ClearQueue();
			reag.add(new char[1][100]{"Sodium Nitroprusside"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Purple colour is obtained");
		}

		else if((VirtUser.ANION + 1) ==11)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"BaCl2"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"White ppt is obtained");

			reag.ClearQueue();
			reag.add(new char[2][100]{"K2Cr2O7","Dil H2SO4"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Green colourisation is obtained");
		}
	}
    else
        strcpy(VirtUser.observations[VirtUser.a++],"Absence of Anion! Tests Done Wrong.");
}


void ConfirmBasicRadical(UserModel &VirtUser)
{
	ReagentQueue reag = ReagentQueue();

	if((VirtUser.CATION +  1)==2)
	{
		if((VirtUser.CATION +  1)==2)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"NaOH"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Colourless gas with a pungent smell giving dense white fumes with a rod dipped in conc HCL");

			reag.ClearQueue();
			reag.add(new char[2][100]{"NaOH","Nesslers Reagent"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Red brown ppt is formed");
		}
		else
			strcpy(VirtUser.observations[VirtUser.a++],"Absence of Zero group!");
	}

	if((VirtUser.CATION +  1)==1||(VirtUser.CATION +  1)==3||(VirtUser.CATION +  1)==4||(VirtUser.CATION +  1)==5||(VirtUser.CATION +  1)==6||(VirtUser.CATION +  1)==7||(VirtUser.CATION +  1)==8||(VirtUser.CATION +  1)==9||(VirtUser.CATION +  1)==10||(VirtUser.CATION +  1)==11||(VirtUser.CATION +  1)==12)
	{
		if((VirtUser.CATION +  1)==1)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"NaOH"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Gelatinous white ppt is obtained");

			reag.ClearQueue();
			reag.add(new char[2][100]{"Blue litmus","NH4OH"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Blue lake is formed");
		}

		else if((VirtUser.CATION +  1)==3)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"K2CrO4"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Yellow ppt is obtained");
		}

		else if((VirtUser.CATION +  1)==4)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"(NH4)2C2O49"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"White ppt is obtained");
		}

		else if((VirtUser.CATION +  1)==5)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"NH4OH"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"A light blue ppt dissolving in excess to give a deep blue solution");

			reag.ClearQueue();
			reag.add(new char[1][100]{"K4[Fe(CN)6]"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Chocolate brown ppt is formed");
		}

		else if((VirtUser.CATION +  1)==6)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"K4[Fe(CN)6]"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Prussian blue colour is formed");


			reag.ClearQueue();
			reag.add(new char[2][100]{"Dil HCL","KCNS"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Blood red colour is formed");
		}

		else if((VirtUser.CATION +  1)==7)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"K2CrO4"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Yellow ppt is obtained");

			reag.ClearQueue();
			reag.add(new char[1][100]{"KI"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Yellow ppt which is soluble when heated and reappears as golden spangles");

			reag.ClearQueue();
			reag.add(new char[1][100]{"H2SO4"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"White ppt soluble in (CH3COO)NH4");
		}

		else if((VirtUser.CATION +  1)==8)
		{
			reag.ClearQueue();
			reag.add(new char[3][100]{"NH4Cl","NH4OH","Na2HPO4"}, 3);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"White ppt is obtained");

			reag.ClearQueue();
			reag.add(new char[4][100]{"NH4Cl","NH4OH","Na2HPO4","CO(NO3)2"}, 4);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Pink ash is obtained");
		}

		else if((VirtUser.CATION +  1)==9)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"NaOH"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"A white ppt which turns brown and finally black on long standing");

			reag.ClearQueue();
			reag.add(new char[2][100]{"Conc HNO3","PbO2"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Pinkish purple colour is obtained");
		}

		else if((VirtUser.CATION +  1)==10)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"NaOH"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Apple green ppt is formed");

			reag.ClearQueue();
			reag.add(new char[2][100]{"Dimethyl glyoxime","NH4OH"}, 2);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Cherry red ppt is formed");
		}

		else if((VirtUser.CATION +  1)==11)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"(NH4)2SO4"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"White ppt is formed");
		}

		else if((VirtUser.CATION +  1)==12)
		{
			reag.ClearQueue();
			reag.add(new char[1][100]{"NaOH"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"A white ppt soluble in excess is obtained");

			reag.ClearQueue();
			reag.add(new char[1][100]{"K4[Fe(CN)6]"}, 1);
			if(CompareReagent(VirtUser.curr,reag) == 1)
				strcpy(VirtUser.observations[VirtUser.a++],"Greenish white ppt is formed");
		}
	}
    else
        strcpy(VirtUser.observations[VirtUser.a++],"Absence of Cation! Tests Done Wrong");
}


void execute(UserModel &VirtUser)
{
	ConfirmAcidRadical(VirtUser);
	ConfirmBasicRadical(VirtUser);
}

void displayAbout()
{
	char t[80];
	ifstream fi("About.txt");
	if(!fi)
	{
		cout<<"File open error";
		return;
	}
	while(!fi.eof())
	{
		fi.getline(t,80);
		cout<<t<<endl;
	}
	fi.close();

	cout<<"\n\nHit any key to continue...";
	getch();
}

void DisplayUI(UserModel &user)
{
    system("cls");
	cout<<"-------------------------------------------------------------------------------\n";
	cout<<"\t\t\t    Salt Anaysis Simulator 1.0\n";
	cout<<"-------------------------------------------------------------------------------\n";
	cout<<"Tests/Observations:\n\n";

	for(int i = 0; i < user.a; i++)
		  cout<<(i + 1)<<". "<<user.observations[i]<<"\n";

	cout<<"-------------------------------------------------------------------------------\n\n";
	cout<<"1. Add reagent to queue\n";
	cout<<"2. Remove reagent from queue\n";
	cout<<"3. View reagent queue\n";
	cout<<"4. Run Prelims\n";
	cout<<"5. Dilute Acid Test\n";
	cout<<"6. Concentrated Acid Test\n";
	cout<<"7. Execute test\n";
	cout<<"8. View answer\n";
	cout<<"9. About\n";
	cout<<"10. Exit\n\n";
	cout<<"Enter choice: ";
}

int main()
{
    UserModel user = UserModel();
    int choice = 0;
    while(1 == 1)
	 {
		  DisplayUI(user);
		  cin>>choice;

		  switch(choice)
		  {
            case 1:
					 user.addReagent();
                     getch();
					 break;

				case 2:
					 user.removeReagent();
                     getch();
					 break;

				case 3:
					 user.viewQueue();
                     getch();
					 break;

				case 4:
					 prelims(user);
                     getch();
					 break;

				case 5:
					 DilAcid(user);
                     getch();
					 break;

				case 6:
					 ConcAcid(user);
                     getch();
                     break;

				case 7:
					 execute(user);
                     getch();
                     break;

				case 8:
                     user.displaySalt();
                     getch();
                     break;

				case 9:
                    displayAbout();
                    getch();
                    break;

				case 10:
                    exit(0);
                    break;

				default:
                    cout<<"Please enter a valid choice!\n";
		  }
	 }
	 return 0;
}

