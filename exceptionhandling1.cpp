#include<iostream>
#include<conio.h>
using namespace std;

// Multiple catch statements
/*
int main()
{
    int a=2;
    try
    {
        if(a==1)
        {
            throw a;
        }
        else if(a==2){
            throw 'A';

        }
        else if(a==3){
            throw 3.4;
        }
    }
    catch(int a)
    {
        cout<<"Integer exception is caught\n";
    }
    catch(char ch)
    {
        cout<<"character exce[tion is caught\n";
    }
    catch(float n)
    {
        cout<<" float exception is catch\n";
    }
    cout<<"End of program";

    
}
*/

//In case if we throw the long type exception which have no catch block to catch 
//exception in this case to handle any type of exception we use (...) inside catch block

int main()
{
    int a=2;
    try
    {
        if(a==1)
        {
            throw a;
        }
        else if(a==2){
            throw 'A';

        }
        else if(a==3){
            throw 3.4;
        }
    }
    catch(...)
    {
        cout<<"Exception occur\n";
    }
    cout<<"End of program";
}