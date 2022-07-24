#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream obj;
    obj.open("test.txt",ios::out);
    obj<<"hello worlld";
    int pos=6;
    obj.seekp(pos-1);
    obj<<"...And here the next changed";
    obj.close();
    return 0;
}