#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

int i=0,j=0;

class salt
{
    static char cation[5];
    static char anion[8];
public:
    salt();
    static char *cat() { return cation; };
    static char *an() { return anion; };
    void display();
};
void prelim(salt);
void confirm(salt);
void check(salt);
void save(salt);
void prev();
void del();
void about();
int main();

static char CATION[14][5]={"NH4+","Pb2+","Cu2+","Fe2+","Fe3+","Al3+",
"Co2+","Ni2+","Mn2+","Zn2+","Ba2+","Sr2+","Ca2+","Mg2+"};

static char ANION[9][8] = {"(CO3)2-","S2-","(SO3)2-","(NO3)-","Cl-",
"Br-","I-","(SO4)2-","(PO4)3-"};

salt::salt()
{
    int i=14,j=9,k,l;
    srand(time(NULL));
    k=rand()%(14);
    l=rand()%(9);
    for(int x; ANION[k][x]!='\0';x++)
    {
        anion[x]=ANION[k][x];
    }
    for (int y; CATION[l][y] != '\0';y++)
    {
        anion[y] = ANION[l][y];
    }
}

void anone(salt s)
{
    cout << "\n\n Group reagent test: SS + dil.H2SO4\n" ;
    if (strcmp(s.an(), "(CO3)2-")==0)
    {
        cout << "\n Brisk effervesence is seen.";
    }
    else if (strcmp(s.an(), "S2-") == 0)
    {
        cout << "\n Smell of rotten egg.";
    }
    else if (strcmp(s.an(), "(SO3)2-") == 0)
    {
        cout << "\n Pungent smell of burning sulphur.";
    }
    else cout << "\n No observation. Group 1 not there." ;
}

void antwo(salt s)
{
    cout << "\n\n Group reagent test: SS + conc.H2SO4\n";
    if (strcmp(s.an(), "Cl-") == 0)
    {
        cout << "\n Dence white fumes give headjerk and makes one cough.";
    }
    else if (strcmp(s.an(), "Br-") == 0)
    {
        cout << "\n Deep brown vapours.";
    }
    else if (strcmp(s.an(), "I-") == 0)
    {
        cout << "\n Voilet vapours.";
    }
    else if (strcmp(s.an(), "(NO3)-") == 0)
    {
        cout << "\n No observation; + Cu turnings and heat--> Brown vapours.";
    }
    else cout << " Group two not there." ;
}

void anthree(salt s)
{
    if ((strcmp(s.an(), "(SO4)2-") == 0) || (strcmp(s.an(), "(PO4)3-") == 0))
    {
        if (strcmp(s.an(), "(SO4)2-") == 0)
        {
            cout << "\n WE + BaCl2 --> white ppt\n white ppt + conc.HCl --> ppt insoluble.\n\n";
        }
        else if (strcmp(s.an(), "(PO4)3-") == 0)
        {
            cout << "\n SS + conc.HNO3 + (NH4)6Mo7O24 ---> bright yellow ppt.";
        }
    }
    else
    {
        cout << "\n\n Independent group not there. \n";
    }
}

void catzero(salt s)
{
    if (strcmp(s.cat(), "NH4+") == 0)
    {
        cout << "\n SS + NaOH + heat --> smell of ammonia\n";
    }
    else
    {
        cout << "\n\n Zero group absent. \n";
    }
}

void catone(salt s)
{
    if (strcmp(s.cat(), "Pb2+") == 0)
    {
        cout << "\n OS + dil.H2SO4 --> white ppt\n";
    }
    else
    {
        cout << "\n\n First group absent. \n";
    }
}

void cattwo(salt s)
{
    if (strcmp(s.cat(), "Cu2+") == 0)
    {
        cout << "\n OS + (NH4)OH + H2S(g)--> Black ppt\n";
    }
    else
    {
        cout << "\n\n Second group absent. \n";
    }
}

void catthree(salt s)
{
    if (strcmp(s.cat(), "Al3+") == 0)
    {
        cout << "\n Gives blue ash on doing filter ash test. \n";
    }
    else if (strcmp(s.cat(), "Fe2+")||strcmp(s.cat(), "Fe3+") == 0)
    {
        cout << "\n OS + HNO3 + NH4OH + heat --> Dirty brown ppt\n";
    }
    {
        cout << "\n\n Third group absent. \n";
    }
}

void catfour(salt s)
{
    if (strcmp(s.cat(), "Zn2+") == 0)
    {
        cout << "\n Gives green ash on doing filter ash test. \n";
    }
    else if (strcmp(s.cat(), "Mn2+") == 0)
    {
        cout << "\n OS + NH4Cl + NH4OH + H2 --> Dirty brown ppt\n";
    }
    else if (strcmp(s.cat(), "Ni2+") == 0)
    {
        cout << "\n OS + NH4Cl + NH4OH + H2 --> Black ppt\n";
    }
    else if (strcmp(s.cat(), "Co2+") == 0)
    {
        cout << "\n OS + NH4Cl + NH4OH + H2 --> Black ppt\n";
    }
    else
    {
        cout << "\n\n Fourth group absent. \n";
    }
}

void catfive(salt s)
{
    if (strcmp(s.cat(), "Ba2+") == 0)
    {
        cout << "\n Apple green colour is imparted to the flame. \n";
    }
    else if (strcmp(s.cat(), "Sr2+") == 0)
    {
        cout << "\n Crimson red colour is imparted to the flame.\n";
    }
    else if (strcmp(s.cat(), "Ca2+") == 0)
    {
        cout << "\n Brick red colour is imparted to the flame.\n";
    }
    else
    {
        cout << "\n\n Fifth group absent. \n";
    }
}

void catsix(salt s)
{
    if (strcmp(s.cat(), "Mg2+") == 0)
    {
        cout << "\n Filter ash test gives buff colour. \n";
    }
    else
    {
        cout << "\n\n Sixth group absent. \n";
    }
}

void salt::display()
{
    puts(cation);
    puts(anion);
    cout <<" Name of all the ions:-\n";
    for(i=0;i!=14;i++)
    {
        for(j=0;CATION[i][j]!='\0';j++)
            cout<<CATION[i][j]<<endl;
    }
        for(i=0;i!=14;i++)
    {
        for(j=0;ANION[i][j]!='\0';j++)
            cout<<ANION[i][j]<<endl;
    }
}

void anionpre(salt s)
{
    int y;
    do
    {
        cout << "-------------------------------------------------------------------------------\n";
        cout << "\t\t\t    Anion Prelims\n";
        cout << "-------------------------------------------------------------------------------\n";
        cout << "1. First group. \n";
        cout << "2. Second group. \n";
        cout << "3. Third group. \n";
        cout << "4. Back to previous menu.\n";
        cin >> y;
        switch (y)
        {
        case 1:
            anone(s);
            break;
        case 2:
            antwo(s);
            break;
        case 3:
            anthree(s);
            break;
        case 4:
            prelim(s);
            break;
        default:
            break;
        }
    } while (1);
    anionpre(s);
}

void cationpre(salt s)
{
    int y;
    do
    {
        cout << "-------------------------------------------------------------------------------\n";
        cout << "\t\t\t    Cation Prelims\n";
        cout << "-------------------------------------------------------------------------------\n";
        cout << "1. Zero group. \n";
        cout << "2. First group. \n";
        cout << "3. Second group. \n";
        cout << "4. Third group. \n";
        cout << "5. Fourth group. \n";
        cout << "6. Fifth group. \n";
        cout << "7. Sixth group. \n";
        cout << "8. Back to previous menu.\n";
        cin >> y;
        switch (y)
        {
        case 1:
            catzero(s);
            break;
        case 2:
            catone(s);
            break;
        case 3:
            cattwo(s);
            break;
        case 4:
            catthree(s);
            break;
        case 5:
            catfour(s);
            break;
        case 6:
            catfive(s);
            break;
        case 7:
            catsix(s);
            break;
        case 8:
            prelim(s);
            break;
        default:
            break;
        }
    } while (1);
    cationpre(s);
}

void prelim(salt s)
{
    int y;
    do{
        cout << "-------------------------------------------------------------------------------\n";
        cout << "\t\t\t   Preliminary test Menu\n";
        cout << "-------------------------------------------------------------------------------\n";
        cout << "1. Anion test.\n";
        cout << "2. Cation test.\n";
        cout << "3. Back to main menu.\n";
        cin >> y;
        switch (y)
        {
            case 1:
                anionpre(s);
                break;
            case 2:
                cationpre(s);
                break;
            case 3:
                main ();
            default:
                break;
        }
    }while(1);
    prelim(s);
}

void canion(salt s)
{
    if (strcmp(s.an(), "(CO3)2-") == 0)
    {
        cout << "\n Carbonating test tube + SS(long limb) + lime water (u-part) + dil.H2SO4 : ";
        cout << "\n Lime water turns milky.";
        cout << "\n Milky water + CO2 --> milkiness disappears.\n\n";
    }
    else if (strcmp(s.an(), "S2-") == 0)
    {
        cout << "\n Carbonating test tube + SS(long limb) + Lead acetate (u-part) + dil.H2SO4 :\n";
        cout << " Black colour\n";
        cout << " WE + Na[Fe(CN)5NO] --> Purple colour\n";
    }
    else if (strcmp(s.an(), "(SO3)2-") == 0)
    {
        cout << "\n WE + BaCl2 ---> White ppt\n";
        cout << " White ppt + conc.HCl ---> ppt becomes soluble.\n";
    }
    else if (strcmp(s.an(), "Cl-") == 0)
    {
        cout << "\n Silver nitrate test --> positive\n";
        cout << " To the above ppt add NH4OH --> ppt dissolves.\n";
    }
    else if (strcmp(s.an(), "Br-") == 0)
    {
        cout << "\n Silver nitrate test(ppt) + NH4OH --> partly soluble ppt.\n";
    }
    else if (strcmp(s.an(), "I-") == 0)
    {
        cout << "\n Silver nitrate test(ppt) + NH4OH --> ppt insoluble.\n";
    }
    else if (strcmp(s.an(), "(NO3)-") == 0)
    {
        cout << "\n WE + FeSO4 + conc.H2SO4 --> brown ring at the junction of the two solutions.\n";
    }
    else if (strcmp(s.an(), "(SO4)2-") == 0)
    {
        cout << "\n WE + BaCl2 --> white ppt\n white ppt + conc.HCl --> ppt insoluble.\n";
    }
    else if (strcmp(s.an(), "(PO4)3-") == 0)
    {
        cout << "\n SS + conc.HNO3 + (NH4)6Mo7O24 ---> canary yellow ppt.";
    }
    else cerr << "Error doing CT";
}

void ccation(salt s)
{
    if (strcmp(s.cat(), "NH4+") == 0)
    {
        cout << "\n Carbonating test tube + SS(long limb) + nesler's reagent (u-part) + NaOH(long limb) : \n";
        cout << "\n Nesler's reagent turns chocolate brown.\n";
    }
    else if (strcmp(s.cat(), "Pb2+") == 0)
    {
        cout << "\n OS + KI --> yellow ppt\n";
    }
    else if (strcmp(s.cat(), "Cu2+") == 0)
    {
        cout << "\n OS + K4[Fe(CN)6]--> Chocolate brown ppt\n";
    }
    else if (strcmp(s.cat(), "Al3+") == 0)
    {
        cout << "\n OS + NH4Cl + NH4OH(excess) --> white ppt \n";
        cout << " To the above add dil HCl --> ppt dissolves\n";
    }
    else if (strcmp(s.cat(), "Fe2+"))
    {
        cout << "\n OS + Potassium thiocynide --> no blood red colour.\n";
        cout << " OS + Potassium Ferricynide --> Prussiun blue colour.";
    }
    else if (strcmp(s.cat(), "Fe3+") == 0)
    {
        cout << "\n  OS + Potassium thiocynide --> blood red colour.\n";
        cout << " OS + Potassium Ferrocynide --> Prussiun blue colour.";
    }
    else if (strcmp(s.cat(), "Zn2+") == 0)
    {
        cout << "\n OS + Potassium ferrocynide --> greenish white ppt\n";
    }
    else if (strcmp(s.cat(), "Mn2+") == 0)
    {
        cout << "\n OS + NaOH --> White ppt (leaving the ppt makes it turn brown)\n";
    }
    else if (strcmp(s.cat(), "Ni2+") == 0)
    {
        cout << "\n OS + DMG + NH4OH --> Scarlett red ppt\n";
    }
    else if (strcmp(s.cat(), "Co2+") == 0)
    {
        cout << "\n OS + KCNS + Acetone --> Blue colouration\n";
    }
    else if (strcmp(s.cat(), "Ba2+") == 0)
    {
        cout << "\n OS + NH4Cl + NH4OH + NH4(CO3)2 --> white ppt \n";
        cout << " white ppt + CH3COOH :";
        cout << "\n add K2Cr2O7 --> yellow ppt";
    }
    else if (strcmp(s.cat(), "Sr2+") == 0)
    {
        cout << "\n OS + NH4Cl + NH4OH + NH4(CO3)2 --> white ppt\n";
        cout << " white ppt + CH3COOH :";
        cout << " add NH4(SO4)2 --> white ppt";
    }
    else if (strcmp(s.cat(), "Ca2+") == 0)
    {
        cout << "\n OS + NH4Cl + NH4OH + NH4(CO3)2 --> white ppt\n";
        cout << " white ppt + CH3COOH :";
        cout << " add ammonium oxalate --> white ppt";
    }
    else if (strcmp(s.cat(), "Mg2+") == 0)
    {
        cout << "\n OS + NH4Cl + any phosphate --> crystalline white ppt. \n";
    }
    else cerr << " Error confirming the cation.";
}

void confirm(salt s)
{
    int y;
    do
    {
        cout << "-------------------------------------------------------------------------------\n";
        cout << "\t\t\t   Confirmatory test Menu\n";
        cout << "-------------------------------------------------------------------------------\n";
        cout << "1. Anion test.\n";
        cout << "2. Cation test.\n";
        cout << "3. Back to main menu.\n";
        cin >> y;
        switch (y)
        {
        case 1:
            canion(s);
            break;
        case 2:
            ccation(s);
            break;
        case 3:
            main();
        default:
            break;
        }
    } while (1);
    confirm(s);
}

void check(salt s)
{
    cout << " The given salt has :-\n";
    cout << " Cation: " << s.an() << endl;
    cout << " Anion: " << s.cat() << endl;
    return;
}

void save(salt s)
{
    ofstream off("save.dat",ios::app|ios::binary);
    off.write((char*)&s,sizeof(s));
    cout << " The salts have been written to the file." ;
    return;
}

void prev()
{
    salt s;
    ifstream iff("save.dat", ios::app | ios::binary);
    while(iff)
    {
        iff.read((char *)&s, sizeof(s));
        cout << " Cation: " << s.cat();
        cout << " Anion : " << s.an();
    }
}

void del()
{
    ifstream myfile;
    ofstream temp;
    salt s;
    myfile.open("save.dat",ios::binary|ios::app);
    temp.open("temp.dat",ios::binary);
    cout << "\n The file to be deleted has the data :- ";
    while (myfile)
    {
        myfile.read((char *)&s, sizeof(s));
        s.display();
    }
    remove("save.dat");
    rename("temp.dat", "save.dat");
}

void about()
{
    cout << "\t|-**************************************************************-|\n";
    cout << "\n\n"<< '\n';
    cout << " #####                            #                                               " << '\n';
    cout << "#     #   ##   #      #####      # #   #    #   ##   #      #   #  ####  #  ####  " << '\n';
    cout << "#        #  #  #        #       #   #  ##   #  #  #  #       # #  #      # #      " << '\n';
    cout << " #####  #    # #        #      #     # # #  # #    # #        #    ####  #  ####  " << '\n';
    cout << "      # ###### #        #      ####### #  # # ###### #        #        # #      # " << '\n';
    cout << "#     # #    # #        #      #     # #   ## #    # #        #   #    # # #    # " << '\n';
    cout << " #####  #    # ######   #      #     # #    # #    # ######   #    ####  #  ####  " << '\n';
    cout << "\n\n"<< '\n';
    cout << "\t|-**************************************************************-|\n";
    cout << " Press any key to continue... " << '\n';
}

int main()
{
    char x,y; salt s;
    cout << "\t|-**************************************************************-|\n";
    cout << "\n\n"<< '\n';
    cout << " #####                            #                                               " << '\n';
    cout << "#     #   ##   #      #####      # #   #    #   ##   #      #   #  ####  #  ####  " << '\n';
    cout << "#        #  #  #        #       #   #  ##   #  #  #  #       # #  #      # #      " << '\n';
    cout << " #####  #    # #        #      #     # # #  # #    # #        #    ####  #  ####  " << '\n';
    cout << "      # ###### #        #      ####### #  # # ###### #        #        # #      # " << '\n';
    cout << "#     # #    # #        #      #     # #   ## #    # #        #   #    # # #    # " << '\n';
    cout << " #####  #    # ######   #      #     # #    # #    # ######   #    ####  #  ####  " << '\n';
    cout << "\n\n"<< '\n';
    cout << "\t|-**************************************************************-|\n";
    cout << " Press any key to continue... " << '\n';

    cout << "\t\t\t\t _                   _\n";
    cout << "\t\t\t\t|_)  _   _.  _|       )\n";
    cout << "\t\t\t\t| ( (/_ (_| (_|  {/  |\n";
    cout << "\t\t\t\t                 /   o \n";
    cout << "\n\n\n\n\n\n\n Press any key to continue... " << '\n';

    do{
        cout << "-------------------------------------------------------------------------------\n";
        cout << "\t\t\t    Salt Analysis Menu\n";
        cout << "-------------------------------------------------------------------------------\n";
        cout << "1. Preliminary tests. \n";
        cout << "2. Confirmatory tests. \n";
        cout << "3. Name of the ions. \n";
        cout << "4. Check the salt. \n";
        cout << "5. Save the current salt.\n";
        cout << "6. See the previous salts.\n";
        cout << "7. Delete the previous records.\n";
        cout << "8. About.\n";
        cout << "9. Exit.\n";
        cout << " Enter your choice : "; cin >> y;
        switch (y)
        {
        case 1:
            prelim(s);
            break;
        case 2:
            confirm(s);
            break;
        case 3:
            cout << " The ions which can be there are: ";
            cout << "\n Cations: NH4+ , Pb2+, Cu2+ , Fe2+ , Fe3+ , Al3+ , Co2+ , Ni2+ , Mn2+ , Zn2+ , Ba2+ , Sr2+ , Ca2+ , Mg2+";
            cout << "\n(CO3)2- , S2- , (SO3)2- , (NO3)- , Cl- , Br- , I- , (SO4)2- , (PO4)3-";
                break;
        case 4:
            check(s);
            break;
        case 5:
            save(s);
            break;
        case 6:
            prev();
            break;
        case 7:
            del();
            break;
        case 8:
            about();
            break;
        default:
            x='y';
            break;
        }
        cout << "Do you want to continue?(y/n) ";
        cin >> x;
    }while(x=='y'||x=='Y');
}