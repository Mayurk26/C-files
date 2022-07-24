//a pointer that is null is called as null pointer

#include<iostream>
using namespace std;
/*
int main()
{
    int *ptr=NULL;
    cout<<"the value of ptr is:"<<ptr;
    return 0;    
}
*/

//void pointer
  //its a pointer which is not associated with any datatype
  //it can hold value of any datatype and can be casted to any type

int main()
{
    int a=10;
    char b='M';

    void *p=&a;   //void pointer holds address of int a
    p=&b;         //void pointer holds address of char b

    cout<<p;
    return 0;
}