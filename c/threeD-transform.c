#include <iostream>
#include <cmath> 
 
using namespace std; 
 
typedef struct {
    float x;
    float y;
    float z;
}Point;
Point points; 
 
float temp = 0; 
 
void showPoint(){
    cout<<"("<<points.x<<","<<points.y<<","<<points.z<<")"<<endl;
} 
 
void translate(float tx, float ty, float tz){
    points.x += tx;
    points.y += ty;
    points.z += tz;
    cout<<"After Translation, new point is :";
    showPoint();
} 
 
void rotatex(float angle){
    angle = angle * M_PI / 180.0;
    temp = points.y;
    points.y = points.y * cos(angle) - points.z * sin(angle);
    points.z = temp * sin(angle) + points.z * cos(angle);
    cout<<"After rotation about x, new point is: ";
    showPoint();
} 
 
void rotatey(float angle){
    angle = (angle * M_PI) / 180.0;
    temp = points.z;
    points.z = points.z * cos(angle) - points.x * sin(angle);
    points.x = temp * sin(angle) + points.x * cos(angle);
    cout<<"After rotation about y, new point is: ";
    showPoint(); 
 
} 
 
void rotatez(float angle){
    angle = angle * M_PI / 180.0;
    temp = points.x;
    points.x = points.x * cos(angle) - points.y * sin(angle);
    points.y = temp * sin(angle) + points.y *cos(angle);
    cout<<"After rotation about z, new point is: ";
    showPoint(); 
 
} 
 
void scale(float sf, float xf, float yf, float zf){
    points.x = points.x * sf + (1 - sf) * xf;
    points.y = points.y * sf + (1 - sf) * yf;
    points.z = points.z * sf + (1 - sf) * zf;
    cout<<"After scaling, new point is: ";
    showPoint();
} 
 
int main()
{
    float tx = 0, ty = 0, tz = 0;
    float sf = 0, xf = 0, yf = 0, zf = 0;
    int choose;
    float angle;
    cout<<"Enter the initial point you want to transform:";
    cin>>points.x>>points.y>>points.z;
    cout<<"Choose the following: "<<endl;
    cout<<"1. Translate"<<endl;
    cout<<"2. Rotate about X axis"<<endl;
    cout<<"3. Rotate about Y axis"<<endl;
    cout<<"4. Rotate about Z axis"<<endl;
    cout<<"5. Scale"<<endl;
    cin>>choose;
    switch(choose){
        case 1:
            cout<<"Enter the value of tx, ty and tz: ";
            cin>>tx>>ty>>tz;
            translate(tx, ty, tz);
            break;
        case 2:
            cout<<"Enter the angle: ";
            cin>>angle;
            rotatex(angle);
            break;
        case 3:
            cout<<"Enter the angle: ";
            cin>>angle;
            rotatey(angle);
            break;
        case 4:
            cout<<"Enter the angle: ";
            cin>>angle;
            rotatez(angle);
            break;
        case 5:
            cout<<"Enter the value of sf, xf, yf and zf: ";
            cin>>sf>>xf>>yf>>zf;
            scale(sf, xf, yf, zf);
            break;
        default:
            break;
    }
    return 0;
}

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
    rectangle(100,200,200,300);
    rectangle(150,250,250,350);
    line(100,200,150,250);
    line(200,300,250,350);
    line(100,300,150,350);
    line(200,200,250,250);
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
            x11=x1*cos(t)-y1*sin(t);
            y11=x1*sin(t)+y1*cos(t);
            x22=x2*cos(t)-y2*sin(t);
            y22=x2*sin(t)+y2*cos(t);
            x33=x3*cos(t)-y3*sin(t);
            y33=x3*sin(t)+y3*cos(t);
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