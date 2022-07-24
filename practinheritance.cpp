#include<iostream>
#include<cmath>
using namespace std;

class simplecalc{
    public:
    int a,b;
    void getdatasimple()
    {
        cout<<"enter the value of a : ";
        cin>>a;
        cout<<"enter the value of b : ";
        cin>>b;
    }
    void performopersimple()
    {
        cout<<"the value of a+b is : "<<a+b<<endl;
        cout<<"the value of a-b is : "<<a-b<<endl;
        cout<<"the value of a*b is : "<<a*b<<endl;
        cout<<"the value of a/b is : "<<a/b<<endl;
    }
    
};

class scientificcalc{
    public:
    int a,b;
    void getdatascien()
    {
        cout<<"enter the value of a : ";
        cin>>a;
        cout<<"enter the value of b : ";
        cin>>b;
    }
    void performoperscien()
    {
        cout<<"the value of cos(a) is : "<<cos(a)<<endl;
        cout<<"the value of sin(b) is : "<<sin(b)<<endl;
        cout<<"the value of exp(a) is : "<<exp(a)<<endl;
        cout<<"the value of cos(b) is : "<<cos(b)<<endl;
    }
};

class hybridcalc : public simplecalc,public scientificcalc{

};

int main()
{
    hybridcalc calc;
    calc.getdatasimple();
    calc.performopersimple();
    calc.getdatascien();
    calc.performoperscien();
    return 0;
}