#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class pixel
{
    float x,y,c;
    public:
    pixel()
    {
        x=10;
        y=10;
        c=11;
    }
    void get()
    {
        cout<<"\nEnter the coordinates:";
        cin>>x>>y;
    }
    void put()
    {
        putpixel(x,y,10);
    }
};

int main()
{
    pixel p;
    //int gd=DETECT,gm=DETECT;
    //initgraph(&gd,&gm,NULL);
    p.get();
    p.put();
    //getch();
    //closegraph();
    return 0;

}