#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<2)
    {
        return n;
    }
    return fib(n-2) + fib(n-1);

}

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n* factorial(n-1);
}
int main()
{
    int a;
    cout<<"enter the no: "<<endl;
    cin>>a;
    //cout<<"the factorial is: "<<factorial(a);
    cout<<"the term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}