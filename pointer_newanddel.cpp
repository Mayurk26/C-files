#include<iostream>
using namespace std;

int main()
{
    int a=6;
    int *ptr=&a;
    cout<<"The value of a is : "<<*(ptr)<<endl;

  //new keyword
    float *p=new float(39.37);
    //int *p=new int(4);
    cout<<"the value at address of p is : "<<*(p)<<endl;

    int *arr=new int[3];
    arr[0]=10;
    //arr[1]=20;
    *(arr+1)=20;
    arr[2]=30;
    //delete[] arr;
    cout<<"the value of arr[0] is :"<<arr[0]<<endl; 
    cout<<"the value of arr[1] is :"<<arr[1]<<endl; 
    cout<<"the value of arr[2] is :"<<arr[2]<<endl; 

}