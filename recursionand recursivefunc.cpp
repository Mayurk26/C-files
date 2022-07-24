#include<iostream>
using namespace std;

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
    cout<<"the factorial is: "<<factorial(a);
    return 0;
}