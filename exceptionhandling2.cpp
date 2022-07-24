//Rethrowing exceptions

//it is possible when we have a nested try /catch block.
//an exception to be thrown from inner catch block to outer catch block.

#include<iostream>
#include<conio.h>
using namespace std;
/*
int main()
{
    int a=2;
    try{
        try{
            throw a;
        }
        catch(int x)
        {
            cout<<"inner catch block exception is caught\n";
            throw x;
        }
    }
    catch(int n)
    {
        cout<<"outer catch block exception is caught\n";
    }
    cout<<"end program";

}*/

//user defined exception using class too

class demo
{
    
};
int main()
{
    try{
        throw demo();
    }
     catch(demo d)
     {
         cout<<"exception caught of class demo\n";
     }
}

