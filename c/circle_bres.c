//BRESENHAM

#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawcircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, YELLOW);
    putpixel(xc-x, yc+y, YELLOW);
    putpixel(xc+x, yc-y, YELLOW);
    putpixel(xc-x, yc-y, YELLOW);
    putpixel(xc+y, yc+x, YELLOW);
    putpixel(xc-y, yc+x, YELLOW);
    putpixel(xc+y, yc-x, YELLOW);
    putpixel(xc-y, yc-x, YELLOW);
}

void circlebresenham(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawcircle(xc, yc, x, y);
    while (y >= x){ x++;
        if (d < 0)
        {
            d = d + 4 * x + 6;
        }
        else
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        drawcircle(xc, yc, x, y);
        delay(50);
    }
}

int main()
{
    int xc, yc, r;
    printf("\n\n\tBRESENHAM ALGORITHM CIRCLE\n");
    printf("\nEnter x co-ordinate of center of circle: ");
    scanf("%d", &xc);
    printf("Enter y co-ordinate of center of circle: ");
    scanf("%d", &yc);
    printf("Enter the radius if the circle: ");
    scanf("%d", &r);
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    
    circlebresenham(xc, yc, r);
    getch();
    closegraph();
    return 0;
}