#include<iostream>
using namespace std;

/*class student
{
    int rollno;
    int salary;
    public:
    void setroll(void){
        cout<<"enter the roll no of student :"<<endl;
        cin>>rollno;
    }
    void getroll(void){
        cout<<"the roll no of student is :"<<rollno<<endl;
    } 
};
int main()
{
    student ibm[5];           //arrays as object
    for(int i=0;i<5;i++)
    {
      ibm[i].setroll();
      ibm[i].getroll();  
    }
    

}*/

class shopitem
{
    public:
    int id;
    float price;
    void setdata(int a,int b)
    {
        id=a;
        price=b;
    }
    void getdata()
    {
        
        cout<<"code of item is "<<id<<endl;
        cout<<"price  of item is "<<price<<endl;
    }
};

int main()
{
    int size=3;
    shopitem *ptr=new shopitem[size];
    int p,q,i;
    for(i=0;i<size;i++)
    {
        cout<<"enter the id and price of item :",(i+1);
        cin>>p>>q;
    }
}

//objects as function arguments
/*
class complex
{
    int a;
    int b;
    public:
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;

    }
    void setdatasum(complex o1,complex o2)
    {
        
        a=o1.a+o2.a;
        b=o2.b+o2.b;
    }
    void printno(){
        cout<<"your complex no is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3;    //objects
    c1.setdata(3, 8);
    c1.printno();
    c2.setdata(4, 7);
    c2.printno();
    c3.setdatasum(c1,c2);     //passsing objects c1,c2 as function arguments
    c3.printno();


}*/