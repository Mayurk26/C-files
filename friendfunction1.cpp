#include<iostream>
using namespace std;

class complex
{ 
    int a,b;
    public:
    void setno(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    friend complex sumcomplex(complex o1,complex o2);   //if function outside class can't access privete data inside class sobto access the private data we have to declare it in class and use friend keyword
                                                       //so error will not occur otherwise error will occur
    void printno(){
        cout<<"your no is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setno((o1.a + o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    complex c1,c2,sum;
    c1.setno(1 ,6);
    c1.printno();

    c2.setno(1 ,6);
    c2.printno();

    sum = sumcomplex(c1,c2);
    sum.printno();
    return 0;

}
