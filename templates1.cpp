//class templates with multiple parameters

#include<iostream>
using namespace std;
/*
template<class T1,class T2>
class Tech
{
    T1 x;
    T2 y;
    public:
    Tech(T1 a, T2 b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"values are "<<x<<" "<<y<<endl;
    }
};

int main()
{
    
    Tech<int,float>may(2,1.3);
    may.print();
    return 0;
}
*/

template<class T1,class T2,class T3>
class data
{
    public:
    T1 name;
    T2 div;
    T3 rollno;
    data(T1 a,T2 b, T3 c)
    {
        name=a;
        div=b;
        rollno=c;
    }
    void printdata()
    {
        cout<<this->name<<" - "<<this->div<<" - "<<this->rollno<<endl;
    }
};

int main()
{
    data<string,char,int>obj1("Mayur",'A',43);
    obj1.printdata();
    data<int,long,float>obj2(3,0.34123412,23.45);
    obj2.printdata();
    return 0;
}



































     //Template and friend generic function
//1. approach- 1
/*
template<class T>
class A
{
    public:
    A(T a=0): m_a(a){}

    template<class U>
    friend A<U> foo(A<U>&a);
    private:
    T m_a;
};

template<class T> A<T>foo(A<T>&a)
{
     return a;
}
*/

//2. approach 2
/*
template<class T>
class A
{
    public:
    A(T a=0):m_a(a){}

    friend A operator+(const &lhs,const &rhs)
    {
        return lhs.m_a + rhs.m_a;
    }

    private:
    T m_a;
};

int main()
{
    
    A<int>a(5);
    A<int>b(6);
    int i=4;
    a+b;
    i+a;
    return 0;
}
*/

