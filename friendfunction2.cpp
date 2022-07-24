#include<iostream>
using namespace std;
/*
class Y;

class X{
    int data;
    public:
    void setvalue(int value){
        data=value;
    }
    friend void add(X,Y);
};

class Y{
    int num;
    public:
    void setvalue(int value){
        num=value;
    }
    friend void add(X,Y);
};

void add(X o1,Y o2)
{
     cout<<"summing data of X and Y objects gives me "<< o1.data + o2.num;  
}

int main()
{
    X a1;
    a1.setvalue(5);
    Y b1;
    b1.setvalue(6);
    add(a1,b1);
    return 0;
}*/

class c2;

class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val1=a;
    }
    void display(void){
        cout<<val1<<endl;
    }
};

class c2{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val2=a;
    }
    void display(void){
        cout<<val2<<endl;
    }
};

void exchange(c1 & x,c2 & y)
{
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main()
{
    c1 m1;
    c2 m2;
    m1.indata(35);
    m2.indata(63);
    exchange(m1,m2);

    cout<<"the value of c1 after exchanging becomes ";
    m1.display();
    cout<<"the value of c2 after exchanging becomes ";
    m2.display();
    


}
