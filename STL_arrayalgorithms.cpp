#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    int arr[]={1,3,5,6,7,-2};
   //// Checking if all elements are positive
    all_of(arr,arr+6,[](int x) {return x>0;})?
    cout<<"all are positve":
    cout<<"\nALL are not positive ";

    //Checking if any element is negative
    any_of(arr,arr+6,[](int x) { return x<0;})?
    cout<<"\n\nnegative element present ":
    cout<<"\n no negative element";

    //checking if none of element is negative 
    none_of(arr,arr+6,[](int x) {return x<0;})?
    cout<<"\n\nno negative element present ":
    cout<<"\n\nnegative element is present "<<endl;

    int arr1[6];    //elements in arr are copied in arr1
    copy_n(arr,6,arr1);
    cout<<"\n\nelements in arr1 are : ";
    for(int i=0;i<6;i++)
    {
        cout<<" "<<arr1[i];
    }

    
    int ar[6] =  {0};
    // Using iota() to assign values
    iota(ar, ar+6, 20);
    // Displaying the new array
    cout << "\n\nThe new array after assigning values is : ";
    for (int i=0; i<6 ; i++)
       cout << ar[i] << " ";

    
}

