//Member function templates and overloading function templates

#include<iostream>
using namespace std;

template<class T>
class Info
{
    public:
    T data;
    Info(T a)
    {
        data =a;
    }
    void display();
};

template<class T>
void Info<T> :: display()
{
    cout<<data;
    cout<<endl;
}

void func(int a)
{
    cout<<"the value in func is "<<a<<endl;
}

template<class T>
void func(T a)
{
    cout<<"the value in templatised func is "<<a<<endl;
}


int main()
{
    Info<int>h(5);
    cout<<h.data<<endl;
    h.display();
    

    func(6);
    func('c');
    return 0;
}