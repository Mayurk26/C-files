#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream obj;
    obj.open("test.txt",ios::out);
    obj<<"hello world";
    int pos;
    pos=obj.tellp();
    cout<<pos;
    obj.close();
}


