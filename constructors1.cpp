#include<iostream>
using namespace std;
/*
class complex
{
    int a,b;
    public:
    complex(int x,int y);   //parametreized constructor
    void printno()
    {
        cout<<"the no is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex::complex(int x, int y)
{
    a=x;
    b=y;

}

int main()
{
    //implicit call
    complex a(4,6);
    a.printno();

    //explicit call
    complex b=complex(5,7);
    b.printno();
    return 0;
}*/
 


 class point
 {
     int x,y;
     public:
     point(int a,int b)
     {
         x=a;
         y=b;
     }
     void printno()
     {
         cout<<"the pair is ("<<x<<" , "<<y<<")"<<endl;
     }
 };

 int main()
 {
     point m1(2,6);
     m1.printno();
     point m2(3,4);
     m2.printno();
     return 0;
 }