#include<iostream>
using namespace std;

int prod(int a,int b)   //the func with 2 arguments
{
    return a*b;
}

int prod(int a,int b,int c)    //the func with 3 arguments
{
    return a*b*c;
}
//volume of cube
int volume(int a)
{
    return a*a*a;
}
//volume of cylinder
int volume(int r,int h)
{
    return (3.14*r*r*h);
}

int main()               //although the func name is same it will call correctly the concept is overloading
{
    cout<<"the prod is "<<prod(7,2);
    cout<<"\nthe prod is "<<prod(2,7,6);
    cout<<"\n the volume of cube is "<<volume(3);
    cout<<"\n the volume of cylinder is "<<volume(5,6);
    return 0;

}