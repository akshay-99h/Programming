#include <stdio.h>
#include <string.h>

struct phoneBook{
    char name[20],phno[15];

    void getdata()
    {
        printf("\nEnter Name : ");
        scanf("%[^\n]s",name);
        printf("Enter Phone No. : ");
        scanf("%[^\n]s",phno);
    }

    void showdata()
    {
    printf("\n");
    printf("%20s",name);
    printf("%15s",phno);
    }
};


int main(){
    phoneBook rec;
    fstream file;
    file.open("phone.dat", ios::ate | ios::in | ios::out | ios::binary);
    char ch,nm[20],telno[6];
    int choice,found=0;
    while(1){
        clrscr();
        printf("\n*****Phone Book*****\n");
        printf("1) Add New Record\n");
        printf("2) Display All Records\n");
        printf("3) Search Telephone No.\n");
        printf("4) Search Person Name\n");
        printf("5) Update Telephone No.\n");
        printf("6) Exit\n");
        printf("Choose your choice : ");
        scanf("%d",choice);
        switch(choice){
            case 1 : //New Record
                 rec.getdata();
                 cin.get(ch);
                 file.write((char *) &rec, sizeof(rec));
                 break;

            case 2 : //Display All Records
                 file.seekg(0,ios::beg);
                 printf("\n\nRecords in Phone Book\n");
                 while(file){
                    file.read((char *) &rec, sizeof(rec));
                    if(!file.eof())
                        rec.showdata();
                 }
                 file.clear();
                 getch();
                 break;

            case 3 : //Search Tel. no. when person name is known.
                 printf("\n\nEnter Name : ");
                 scanf("%[^\n]s",nm);
                 file.seekg(0,ios::beg);
                 found=0;
                 while(file.read((char *) &rec, sizeof(rec)))
                 {
                    if(strcmp(nm,rec.getname())==0)
                    {
                        found=1;
                        rec.showdata();
                    }
                 }
                 file.clear();
                 if(found==0)
                    printf("\n\n---Record Not found---\n");
                 getch();
                 break;

            case 4 : //Search name on basis of tel. no
                 printf("\n\nEnter Telephone No : ");
                 scanf("%[^\n]s",telno);
                 file.seekg(0,ios::beg);
                 found=0;
                 while(file.read((char *) &rec, sizeof(rec)))
                 {
                    if(strcmp(telno,rec.getphno())==0)
                    {
                        found=1;
                        rec.showdata();
                    }
                 }
                 file.clear();
                 if(found==0)
                    printf("\n\n---Record Not found---\n");
                 getch();
                 break;

            case 5 : //Update Telephone No.
                 printf("\n\nEnter Name : ");
                 scanf("%[^\n]s",nm);
                 file.seekg(0,ios::beg);
                 found=0;
                 int cnt=0;
                 while(file.read((char *) &rec, sizeof(rec)))
                 {
                    cnt++;
                    if(strcmp(nm,rec.getname())==0)
                    {
                        found=1;
                        break;
                    }
                 }
                 file.clear();
                 if(found==0)
                    printf("\n\n---Record Not found---\n");
                 else
                 {
                    int location = (cnt-1) * sizeof(rec);
                    cin.get(ch);
                    if(file.eof())
                        file.clear();

                    printf("Enter New Telephone No : ");
                    scanf("%[^\n]s",telno);
                    file.seekp(location);
                    rec.update(nm,telno);
                    file.write((char *) &rec, sizeof(rec));
                    file.flush();
                 }
                 break;
            case 6 : gotoout;
        }
    }
    out:
    file.close();
    return 0;
}