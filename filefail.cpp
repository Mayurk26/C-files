#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("my_file.txt",ios::out);
    string data;

    file>>data;
    if(file.fail()){
        cout<<"operation not success!"<<endl;
        cout<<"status of the failbit: "<<file.fail()<<endl;

    }
    else{
        cout<<"data read from file- "<<data<<endl;

    }
    return 0;
}