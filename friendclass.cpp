#include<iostream>
using namespace std;

//forward declaration
class complex;

class calculator
{
    public:
    int add(int a,int b)
    {
        return (a +b);
    }
    int sumrealcomplex(complex ,complex);
    int sumcompcomplex(complex ,complex);

};


class complex
{ 
    int a,b;
    //individually declaring functions as friend
    //friend int calculator ::sumrealcomplex(complex,complex);
    //friend int calculator ::sumcompcomplex(complex,complex);

    //declaring entire class as a friend
    friend class calculator;

    public:
    void setno(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void printno(){
        cout<<"your no is "<<a<<" + "<<b<<"i"<<endl;
    }
};

//instead of making so many functions as friend we can make directly friend class

int calculator::sumrealcomplex(complex o1,complex o2){
    return (o1.a +o2.a);
}
int calculator::sumcompcomplex(complex o1,complex o2){
    return (o1.b +o2.b);
}

int main()
{
    complex o1,o2;
    o1.setno(1,4);
    o2.setno(2,7);
    calculator calc;
    int res =calc.sumrealcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    int res1 =calc.sumcompcomplex(o1,o2);
    cout<<"the sum of imaginary part of o1 and o2 is "<<res1<<endl;
    return 0;
}

