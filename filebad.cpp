#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("my_file.txt",ios::in);
    string data;
    file>>data;
    if(file.bad()){
        cout<<"operation not success!"<<endl;
        cout<<"status of the badbit: "<<file.bad()<<endl;
    }
    else{
        cout<<"data read from file- "<<data<<endl;
    }
    return 0;

}