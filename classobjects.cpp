#include<iostream>
using namespace std;
/*
class Car   //class name
{
    public:    //acces specifier
    string company;   //attributes
    string model;
    int year;
};

int main()
{
    Car obj1;
    obj1.company="ford";
    obj1.model="endevour";
    obj1.year=2020;

    Car obj2;
    obj2.company="mahindra";
    obj2.model="thar";
    obj2.year=2021;

    cout<<obj1.company<<" "<<obj1.model<<" "<<obj1.year<<endl;
    cout<<obj2.company<<" "<<obj2.model<<" "<<obj2.year<<endl;
}*/


//class methods

class myclass
{
    public:
    void myfunc()     //method declaration
    {
        cout<<"hello world";    //inside class function
    }
    int car(int speed);

};

int myclass::car(int speed)   //outside class function
{
    return speed;
}

int main()
{
    myclass obj;
    obj.myfunc();  //method call
    obj.car(300);
    cout<<"\n"<<obj.car(300)<<endl;
    return 0;
}