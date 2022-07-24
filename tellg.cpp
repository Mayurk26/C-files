#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream obj;
    obj.open("test.txt",ios::in);
    char ch;
    int pos;
    while(!obj.eof())
    {
        obj>>ch;
        pos=obj.tellg();
        cout<<pos<<"."<<ch<<"\n";
    }
    obj.close();
}
