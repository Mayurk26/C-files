#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("my_file.txt",ios::in);
    cout<<"goodbit: "<<file.good()<<endl;
    
    string data;
    
    cout<<endl<<"data read from file:"<<endl;
    while(!file.eof()){
        file>>data;
        cout<<data<<" ";

    }
    cout<<endl;
    return 0;
    
}