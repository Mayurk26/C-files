//pointer to objects

#include<iostream>
using namespace std;
class complex{
    public:
    int real,imaginary;
    void getdata()
    {
        cout<<"enter the real part :"<<real<<endl;
        cout<<"enter the imaginary :"<<imaginary<<endl;
    }

    void setdata(int a,int b)
    {
        real=a;
        imaginary=b;
    }
    
};
int main()
{
    //complex m;
    //complex *ptr=&m;

    complex *ptr=new complex;
    //m.setdata(3,4);
    //m.getdata();
    //(*ptr).setdata(3,4);
    ptr->setdata(3,4);      //arrow opeartor it will also works
    //(*ptr).getdata();
    ptr->getdata();
}