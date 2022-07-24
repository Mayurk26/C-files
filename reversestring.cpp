#include<iostream>
using namespace std;

void reverse(string str)
{
    
    for(int i=str.length();i>=0;i--)
    {
        cout<<str[i];
    }
}
int main()
{
    string str;
    cout<<"enter name ";
    cin>>str;
    reverse(str);
    
}