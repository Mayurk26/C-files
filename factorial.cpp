#include<iostream>
using namespace std;
int main()
{
    int num,fact;
    cout<<"enter no:";
    cin>>num;
    fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;

    }
    cout<<"factorial is "<<fact;
}