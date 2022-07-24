#include<iostream>
using namespace std;
                      //constructor overloading
                      //it will call according to arguments
class complex
{
    int a,b;
    public:
    complex()    //default constructor
    {
        a=0;
        b=0;
    }
    complex(int x,int y){    //parametrized
        a=x;
        b=y;
    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    void printno()
    {
        cout<<"the no is "<<a<<"+"<<b<<"i"<<endl;
    }
};



int main()
{
    
    complex c1(4,6);      
    c1.printno();


    complex c2(7);
    c2.printno();

    complex c3;
    c3.printno();
    return 0;
}