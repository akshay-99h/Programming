#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fs, *ft;
    char ch;

    fs = fopen("file1.txt","r");

    if (fs==NULL)
    {
        puts("Cannot open source file");
        exit(0);
    }

    ft = fopen("file2.txt","w");
    
    if (ft==NULL)
    {
        puts("Cannot open target file");
        fclose(fs);
        exit(0);
    }
    
    while (1)
    {
        ch = fgetc(fs);

        if (ch==EOF)
        {
            break;
        }
        else
        {
            fputc(ch,ft);
        }
    }
    fclose(fs);
    fclose(ft);
}