#include <conio.h>
#include <stdio.h>
#include <graphics.h>
void main()
{
    int gd = DETECT, gm;
    float x, y, dx, dy, p;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("Enter the starting points of line:");
    scanf("%d%d", &x0, &y0);
    printf("Enter the ending points of line:");
    scanf("%d%d", &x1, &y1);
 
    dx=x1-x0;  
    dy=y1-y0;  
    x=x0;  
    y=y0;  
    p=2*dy-dx;  
    while(x<x1)  
    {  
        if(p>=0)  
        {  
            putpixel(x,y,7);  
            y=y+1;  
            p=p+2*dy-2*dx;  
        }  
        else  
        {  
            putpixel(x,y,7);  
            p=p+2*dy;
            x=x+1;  
        }  
    }  
    getch();
    closegraph(); 
}