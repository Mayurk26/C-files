#include<iostream>
using namespace std;

int main()
{
    int marks[]={23,63,8,92,62,25};
    for(int i=0;i<4;i++)
    {
          cout<<marks[i]<<endl;
    }

    //pointers and arrays
    int* p=marks;
    cout<<"The value of marks[0] "<<*p<<endl;
    cout<<"The value of *(p+1)"<<*(p+1)<<endl;
    cout<<"The value of *(p+2) "<<*(p+2)<<endl;
    cout<<"The value of *(p+3)"<<*(p+3)<<endl;



}    