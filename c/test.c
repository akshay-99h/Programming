#include<stdio.h>
#include<graphics.h>
 
void main()
{        
int gd= DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
line(50,100,150,250);

closegraph();
}