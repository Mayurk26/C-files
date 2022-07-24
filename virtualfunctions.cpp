#include<iostream>
using namespace std;

class A
{
    public:
    int x=5;
    //void print()
    virtual void print()
    {
        cout<<" the value of baseclass x is :"<<x<<endl;
    }
};

/* virtual keyword as a function is used to when base class pointer points to 
derived class object then it will run derived class print() func it's the use of
virtual function.*/

class B :public A
{
    public:
    int y=10;
    void print()
    {
        cout<<" the value of derivedclass y is :"<<y<<endl;
    }
};

int main()
{
    A *baseptr;
    A obj1;
    B obj2;
    baseptr=&obj2;
    baseptr->print();
    return 0;
}