#include<iostream>
using namespace std;

class base1
{
    public:
    void print()
    {
        cout<<"Hello world\n";
    }
};

class base2
{
    public:
    void print()
    {
        cout<<"bella world";
    }
};

class derived : public base1,public base2
{
    public:
    void print()
    {
        cout<<"good day\n";
    }
};

int main()
{
    derived a1;

    a1.base1::print();    //because compiler will get confuse what to be overriden base1 or base2

    a1.base2::print();   //if we comment out this and try to overriden then it will give eeror

    return 0;
} 