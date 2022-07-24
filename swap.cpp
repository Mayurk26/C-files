#include<iostream>
using namespace std;
//this will not swap a and b
void swap(int a,int b)
{
    int temp = a;
    a=b;
    b= temp;
    
}

void swappointer(int* a,int* b)   //we have to take as pointer toswap the nos
{
    int temp = *a;
    *a=*b;
    *b= temp;
    
}

//call by reference using c++ reference variables
/*void swapreferencevar(int &a, int &b)
{
    int temp= a;
    a= b;
    b= temp;
}*/

//or
int & swapreferencevar(int &a,int &b)
{                                      //this will change the value of a
    int temp=a;
    a=b;
    b=temp;
    return a;
}

int main()
{
    int a=4, b=7;
    cout<<"the values of a is "<<a<<" nad the valeue of b is"<<b<<endl;
    //swap(a,b);  //this will not swap a and b
    //swappointer(&a,&b);     //use address it will store value.    this will make swap.
    //swapreferencevar(a,b);    //using reference variables
    swapreferencevar(a,b)=500;    //to change the value of variable a
    cout<<"the values of a is "<<a<<" nad the valeue of b is"<<b<<endl;

    cout<<a<<" "<<b<<endl;
    
    return 0;
}