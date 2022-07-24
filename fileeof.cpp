#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("my_file.txt",ios::in);
    string data;
    while(!file.eof()){
        file>>data;
        cout<<"data read: "<<data<<" | eofbit: " <<file.eof() <<endl;
    }
    return 0;

}