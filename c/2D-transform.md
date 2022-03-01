# Practical 4

## Implementation of 2-D Transform

> ### by Akshay Prabhat Mishra

---

### Sourcecode

```c
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>

void main()
{
    int gm,gd=DETECT,c;
    float x1,x2,x3,y1,y2,y3,x11,x22,x33,y11,y22,y33,sfx,sfy,tpx,tpy,ang,t;
    clrscr();
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("\n\n\t2D Translation, Rotation and Scaling\n");
    printf("Enter the points (x1,y1): ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the points (x2,y2): ");
    scanf("%f%f",&x2,&y2);
    printf("Enter the points (x3,y3): ");
    scanf("%f%f",&x3,&y3);
    setcolor(WHITE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    a: printf("\n\n 1.Translation\n 2.Rotation\n 3.Scalling\n 4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("Enter the translation factors: ");
            scanf("%f%f",&tpx,&tpy);
            x11=x1+tpx;
            y11=y1+tpy;
            x22=x2+tpx;
            y22=y2+tpy;
            x33=x3+tpx;
            y33=y3+tpy;
            setcolor(RED);
            line(x11,y11,x22,y22);
            line(x22,y22,x33,y33);
            line(x33,y33,x11,y11);
            break;
        case 2:
            printf("Enter the angle of rotation: ");
            scanf("%f",&ang);
            t=3.14*ang/180;
            x11=abs(x1*cos(t)-y1*sin(t));
            y11=abs(x1*sin(t)+y1*cos(t));
            x22=abs(x2*cos(t)-y2*sin(t));
            y22=abs(x2*sin(t)+y2*cos(t));
            x33=abs(x3*cos(t)-y3*sin(t));
            y33=abs(x3*sin(t)+y3*cos(t));
            setcolor(WHITE);
            line(x11,y11,x22,y22);
            line(x22,y22,x33,y33);
            line(x33,y33,x11,y11);
            break;
        case 3:
            printf("Enter the scalling factors: ");
            scanf("%f%f",&sfx,&sfy);
            x11=x1*sfx;
            y11=y2*sfy;
            x22=x2*sfx;
            y22=y2*sfy;
            x33=x3*sfx;
            y33=y3*sfy;
            setcolor(YELLOW);
            line(x11,y11,x22,y22);
            line(x22,y22,x33,y33);
            line(x33,y33,x11,y11);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter the correct choice\n");
    }
    goto a;
    getch();
}
```

---

### Output
