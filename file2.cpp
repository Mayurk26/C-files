#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out<<"this is me\n";
    out<<"this is also me";
    out.close();


    ifstream in;
    string st;
    in.open("sample.txt");
    //in>>st;
    while(in.eof()==0){
        getline(in,st);
        cout<<st;
    }
    
    
    in.close();
    return 0;
}