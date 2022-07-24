#include<iostream>
#include<bits/stdc++.h>
//#include<algorithm>
//#include<stdexcept>
using namespace std;
/*
void func3()
{
    cout<<"insise func 3"<<endl;
    throw runtime_error("runtime_error in function 3");
}

void func2()
{
    cout<<"func 3 is called in func 2"<<endl;
    func3();
}


void func1()
{
    cout<<"func 2 is called in func 1"<<endl;
    func2();
}

int main()
{
    try{
        cout<<"func 1 is called"<<endl;
        func1();
    }
    catch(runtime_error &error)
    {
        cout<<"Exception occired "<<error.what()<<endl;
        cout<<"Exception handled in main function "<<endl;
    }
}*/

int main()
{
    string str;
    cin>>str;
    int n= sizeof(str);
    for(int i=n-1;i>=0;i++)
    {
        cout<<str[i];
    }
    return 0;
}