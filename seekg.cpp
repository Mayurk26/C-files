#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char** argv)
{
     fstream myfile("test.txt",ios::in | ios::out | ios::trunc);
     myfile<<"hello world";
     myfile.seekg(6,ios::beg);

     char A[6];
     myfile.read(A,5);
     A[5]=0;
     cout<< A <<endl;
     myfile.close();
}
