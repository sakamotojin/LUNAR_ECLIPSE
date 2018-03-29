//U_KNOW_ME_AND_U_DON'T_KNOW_ME
//SAKAMOTO_JIN
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main() {
    int gd = DETECT, gm;
    int i=0,j=0;
    initgraph(&gd, &gm,NULL);
    double y;
    cleardevice();
    setcolor(WHITE);
    double xold=100,yold=-(sqrt(501364-pow((100-700),2))-767);
    circle(550,75, 75);
    floodfill(550, 75, WHITE);
    for(int x=100;x<=550;x++)
    {
        //double x1,y1;
        //x1=53;
        //y1=-(sqrt(501364-pow((x1-700),2))-767);
        //int points[]={};
        y=-(sqrt(501364-pow((x-700),2))-767);
        setcolor(GREEN);
        circle(int(xold),int(yold), 75);
        setcolor(BLACK);
        floodfill(int(xold),int(yold), BLACK);
        xold=x;
        yold=y;
        setcolor(WHITE);
        //double xold=100,yold=-(sqrt(501364-pow((100-700),2))-767);
        circle(550,75, 75);
        floodfill(550, 75, WHITE);
        setcolor(BLUE);
        circle(int(x),int(y), 75);
        floodfill(int(x),int(y), BLUE);
        delay(5);
        //x1=x1+1;
        for(int x1=55;x1<=x;x1++)
        {
            double y1=-(sqrt(501364-pow((x1-700),2))-767);
            putpixel(int(x1),int(y1),WHITE);
            x1=x1+8;
        }
    }
    outtextxy(200,400,"   LUNAR ECLIPSE   ");
    outtextxy(100,430,"   U_KNOW_ME_AND_U_DON'T_KNOW_ME  ");
    outtextxy(190,460,"     SAKAMOTO_JIN    ");
    /*for(int x=55;x<=475;x++)
    {
        y=-(sqrt(501364-pow((x-700),2))-767);
        putpixel(int(x),int(y),WHITE);
        x=x+7;
    }*/
    getch();
    closegraph();
    return 0;
}
