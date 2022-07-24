#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    int a,b;
    public:
    
  /*  void input(int a,int b)
    {
        this->a=a;
        this->b=b;

    }*/
    A & input(int a,int b)   //this syntax can also be used
    {
        this->a=a;
        this->b=b;
        return *this;
        return *this;


    } 
    void output()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }

};
int main()
{  //this is a keyword is a pointer which points to the object which invokes the member function
    A a;
    //a.input(3,4);
    //a.output();
    a. input(3,4).output();
    getch();

    return 0;
}