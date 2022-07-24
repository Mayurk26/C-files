#include<iostream>
using namespace std;

int main()
{
    /*int age;
    cout<<"enter age"<<endl;
    cin>>age;
    if(age<12)
    {
        cout<<"child"<<endl;
    }
    else if(age<18 && age>12)
    {
        cout<<"clg student"<<endl;
    }
    else if(age>18)
    {
        cout<<"adult"<<endl;
    }
    else
    {
        cout<<"older"<<endl;
    }
    return 0;*/

    //short hand ifelse 

    /*int age;
    cout<<"enter age"<<endl;
    cin>>age;
    string result=(age<18)? "not adult.":"adult";
    cout<<result;*/

    int day=4;
    switch(day)
    {
    case 3:
       cout<<"sunday";
       break;
    case 5:
    cout<<"monday";
    break;
    default:         //The default keyword specifies some code to run if there is no case match
    cout<<"no days";
    }
}