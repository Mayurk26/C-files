#include<iostream>
#include<string>
using namespace std;
/*
void add(int x,int y,int z)     //func declaration
{
    int sum=x+y+z;
    cout<<"sum is:"<<sum;
}

void name(string fname="Ram")
{
    cout<<fname<<endl;
}

void info(string naav,int age)
{
    cout<<naav<<" is my name and i am "<<age<<" yeras old"<<endl;
}
int myfunc(int n,int m)
{
    return 5+n+m;
}

void swap(int &x,int &y)   //pass by reference
{
    int z=x;
    x=y;
    y=z;
}

int main()
{
    add(5,8,10);       //func call
    name("\nmayur");
    name();          //default parametre
    name("abhi");
    info("mayur",19);

    cout<<myfunc(10,50)<<endl;
    cout<<myfunc(50,15)<<endl;


    int first=10;
    int sec=20;
    cout<<first<<sec<<"   before swap"<<endl;
    swap(first,sec);
    cout<<first<<sec<<"   after swap";


    return 0;
}*/

//Function overloading


int mplus(int x,int y)
{
    return x+y;
}

double mplus(double x,double y)
{
    return x+y;
}

int main()
{
    int num1= mplus(10,20);
    double num2= mplus(23.34,45.37);
    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;

}