#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/* The usefull classes for working with files in c++ are:
1. fstreambase
2. ifstream   --> derived from fstream base
3. ofstream  --> derived from fstream base
*/


/*
int main()
{
    ofstream writefile;
    writefile.open("filename.txt",ios::out);    //ofstream //this crestes the file

    writefile<<"file is very important .it has given very imp in world";   //this writes in the file

    writefile.close();    //this closes the file//closing file to save unwanted waste memeory space
    
    string mytext;  //Create a text string, which is used to output the text file

    ifstream readfile("filename.txt",ios::in);  //ifstream //this reads the file

    while(getline(readfile,mytext));   //getline is use to make them in line
    {
        cout<<mytext;
    }
    readfile.close();    //closing readfile


}

int main()
{
    string st="mayur ";
    string m1="this is so simple";
    ofstream out;
    out.open("sample.txt");
    out<<st;

    ifstream in("sample1.txt");
    in>>m1;
    cout<<m1;
    return 0;

}*/

int main()
{
    //connecting file with mac stream
    ofstream mac("sample.txt");

    //creating a stream and filling it with the string entered by the user
    cout<<"Enter your name: ";
    string name;
    cin>>name;
    //writing a string to the file
    mac<<"My name is "<<name<<endl;
    mac.close();

    ifstream min("sample.txt");
    string content;
    min>>content;
    cout<<"the contetnt of the file is "<<content;
    min.close();
    
    return 0;
}