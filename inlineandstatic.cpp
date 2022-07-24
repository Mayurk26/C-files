#include<iostream>
using namespace std;
//inline fucn
/*
inline int max(int a,int b )
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    cout<<"the maximum is "<<max(200,100)<<endl;
    cout<<"the maximum is "<<max(600,800)<<endl;
    cout<<"the maximum is "<<max(200,150)<<endl;
    cout<<"the maximum is "<<max(200,1100)<<endl;
    cout<<"the maximum is "<<max(290,100)<<endl;
    return 0;
}*/

//static keyword

//not written inside in class 
//always written in outside class
//not recommended to use below  lines with inline function
int product(int a,int b)
{
    static int c=0;    //this executes once only
    c=c+1;           //next time this function is run ,the value c will be retained
    return a*b+c;
}
int main()
{
    int a,b;
    cout<<"enter value of a and b:";
    cin>>a>>b;
    cout<<"product is"<<product(a,b)<<endl;
    cout<<"product is"<<product(a,b)<<endl;
    cout<<"product is"<<product(a,b)<<endl;
    cout<<"product is"<<product(a,b)<<endl;
    cout<<"product is"<<product(a,b)<<endl;

}