#include<iostream>
using namespace std;

class number
{
    int a;
    public:
    number()
    {
        a=0;
    }

    number(int num)
    {
        a=num;
    }
    
    number(number &obj)     //if we comment out this constructor then also it copy value
                              //in this case compiler provides its own copy constructor
    {
        cout<<"copy constructor called"<<endl;
        a=obj.a;
    }

    void display()
    {
        cout<<"the no is "<<a<<endl;
    }

};
int main()
{
    number x,y,z(45);
    x.display();
    y.display();
    z.display();
    number z1(x);   //z1 will copy as x due to copy constructor
    z1.display();
    number z2(z);   //z1 will copy as x due to copy constructor
    z2.display();

    return 0;
}