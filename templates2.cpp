//class templates with default parameters

#include<iostream>
using namespace std;
/*
template<class T1=int,class T2=float,class T3=char>   //giving default datatypes
class data
{
    public:
    T1 a;
    T2 b;
    T3 c;
    data(T1 x, T2 y, T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;

    }
};

int main()
{
    data<>obj1(43,97.6,'A');   //this will use default datatypes that are declared at start
    obj1.display();
    cout<<endl;

    data<string,int,char>obj2("Mayur",43,'A');   //this will use the datatypes which we have given
    obj2.display();
}

*/

//Function template and function templates with parameters

template<class T1,class T2>

float average(T1 a,T2 b)
{
    float avg= (a+b)/2;
    return avg;
}

template<class T>
void swapp(T &a,T &b)
{ 
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    cout<<"the average is "<<average<int,float>(4,2.0)<<endl;
    cout<<endl;
    cout<<"the average is "<<average<int,float>(4,'c')<<endl;
    cout<<endl;

    int x=5,y=7;
    cout<<"nos after swaping is "<<endl;
    swapp(x,y);
    cout<<x<<"\n"<<y<<endl;
}