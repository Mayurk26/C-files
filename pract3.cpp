#include<iostream>
using namespace std;

class window
{
    float length;
    float width;
    bool isopen=true;
    public:
    window(){

    }

    window(float a,float b,bool c)
    {
          length= a;
          width= b;
          isopen= c;

    }

    void getdata(){
        cout<<"\nenter the data :";
        cin>>length>>width>>isopen;
    }

    void display()
    {
        cout<<"\n"<<length<<" "<<width<<" ";
    }

    void is_open()
    {
        if(isopen==true)
        {
            cout<<"window is open\n";
        }
    }

    void isclose(){
        if(isopen==false)
        {
            cout<<"\nwindow is close";
        }
    }

};

int main()
{
    window w1;      //default constructor- this will print the inputed data
    window w2(2.4,3.2,false);   //parameterized constructor
    window w3;
    w1.getdata();
   w1.display();
    w1.is_open();
     
    w2.display();
    w2.isclose();

    w3=w1;   //copy constructor
    w3.display();

    return 0;
}