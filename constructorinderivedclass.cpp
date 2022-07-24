#include<iostream>
using namespace std;
//constructor in deivedd class

/*
case 1:
class B :public A()
    //order of eexecution is -> A() then B()

case2:
class A: public B ,public C
     //order of eexecution is -> B(), C() then A()

case 3:
class A: public B ,virtual public C()
     //order of eexecution is -> C(), B() then A()
*/

class Base1{
    public:
    int data1;
    Base1(int i)
    {
        data1=i;
        cout<<"Base1 class constructor is called"<<endl;
    }
    void printdatabase1()
    {
        cout<<"the value of data1 is :"<<data1<<endl;
    }
};

class Base2{
    public:
    int data2;
    Base2(int i)
    {
        data2=i;
        cout<<"Base2 class constructor is called"<<endl;
    }
    void printdatabase2()
    {
        cout<<"the value of data2 is :"<<data2<<endl;
    }
};

class Derived : public Base1,public Base2{
    public:
    int derived1,derived2;
    Derived(int a,int b,int c,int d):Base1(a),Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor is called :"<<endl;
    }
    void printdataDerived()
    {
        cout<<"the valie of derived1 is : "<<derived1<<endl;
        cout<<"the valie of derived2 is : "<<derived2;
    }

};

int main()
{
    Derived m(1,2,3,4);
    m.printdatabase1();
    m.printdatabase2();
    m.printdataDerived();
    return 0;

    
}
