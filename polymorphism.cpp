/*Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.
polymorphism means many forms  
 
 
 polymorphism in c++ is of two types
 1. compile time polymorphism  -> is achieved using
->    a. function overloading
    b. operator overloading
 2. run time polymorhism   -> is achieved using
    a. virtual functions
  */  
#include<iostream>
using namespace std;

class birds
{
    public:
    void color()
    {
        cout<<"the birds has the variety of colors";
    }
};

class crow:public birds
{
    public:
    void color()
    {
        cout<<"\nthe color of crow is black";
    }
};

class duck:public birds
{
    public:
    void color()
    {
        cout<<"\nthe color of duck is white";
    }
};

int main()
{
    birds obj1;
    crow obj2;
    duck obj3;
    obj1.color();
    obj2.color();
    obj3.color();
    return 0;
}