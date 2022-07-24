#include<iostream>
using namespace std;

int main(int argc,char** argv[])
{
    cout<<"enter the no of argumrnts"<<argc<<endl;
    cin>>argc;
    for(int i=0;i<argc;i++)
    {
        cout<<argv[i]<<"\n";
    }
    return 0;
}
