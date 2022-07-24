//Functions Objects (Functors)

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

//Function Objects :- Function Wrapped in a class so that it is available like an object

int main()
{
    int arr[]={1 ,99,74,22,19,50 };
    //sort(arr,arr+6);    //by default it will sort in ascending order
    sort(arr, arr+6 , greater<int>());   //"greater<int>() - is a function object which will return array in descending order"

                          //And many others function objects are also present    
    for(int i=0;i<6 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}