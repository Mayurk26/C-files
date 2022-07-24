#include<iostream>
using namespace std;

class base
{
    public:
    void print()
    {
        cout<<"Hello world";
    }
};

class derived : public base
{
    public:
    void print()
    {
        cout<<"good day";
    }
};

int main()
{
    derived a;
    a.print();
    return 0;
}