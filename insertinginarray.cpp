#include<iostream>
using namespace std;

int main()
{
    int array[100],n,i,position,value;
    cout<<"\nhow many elements are there in array: ";
    cin>>n;
    cout<<"enter element in array\n :";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"enter the position where you wish to insert array:\n";
    cin>>position;
    cout<<"enter the value to insert:\n";
    cin>>value;
    for(i=n-1;i>=position-1;i--)
    {
        array[i+1]=array[i];
    }
    array[position-1]=value;
    cout<<"resultant array is: \n";
    for(i=0;i<=n;i++)
         cout<<"\n"<<array[i];
    return 0;


}