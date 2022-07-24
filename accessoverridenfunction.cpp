#include<iostream>
using namespace std;
/*
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
        cout<<"good day\n";
    }
};

int main()
{
    derived a1,a2;
    a1.print();    //this will call derived class    --> ovverriding  function

    a2.base::print();   //this will call base class    --> overriden function

    return 0;
}   */

//calling overriden function from derived class

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
        cout<<"good day\n";

        base::print();   //calling overriden function in a derived class
    }
    
};

int main()
{
    derived a1;
    a1.print();    //this will call derived class    --> ovverriding  function

    //a2.base::print();   //this will call base class    --> overriden function

    return 0;
} 

