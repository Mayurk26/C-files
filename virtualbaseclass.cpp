#include<iostream>
using namespace std;

//virtual base class is generally use in case of multipath inheritance
/*
class A
{
    public:
    void print()
    {
        cout<<"hello\n";
    }
};                                 //we will get error in this code without virtual keyword
                                  //because of ambiguity
class B : virtual public A
{
   
};

class C: public virtual A
{

};

class D : public B,public C{

};

int main()
{
    D obj;
    obj.print();
    return 0;
}*/

class student
{
    protected:
    int rollno;
    public:
    void setrollno(int a)
    {
        rollno=a;
    }
    void printrollno(void)
    {
        cout<<"Roll no is "<<rollno<<endl;
    }

};

class Test: virtual public student{
    protected:
    float marks;
    public:
    float maths ,physics;
    void setmarks(float m1,float m2)
    {
        maths=m1;
        physics=m2;

    }
    void printmarks(void)
    {
        cout<<"marks in maths "<<maths<<endl;
        cout<<"marks in physics "<<physics<<endl;
    }
};

class score : virtual public student
{
    protected:
    float score;
    public:
    void setscore(float scr)
    {
        score=scr;

    }
    void printscore(void)
    {
        cout<<"your score is "<<score<<endl;
    }
    
};

class Result : public Test,public score
{
    protected:
    float total;
    public:
    
    void display()
    {
        total=maths+physics+score;
        printrollno();
        printmarks();
        printscore();
        cout<<"your total is "<<total<<endl;
    }
};

int main()
{
    Result m;
    m.setrollno(10);
    m.setmarks(98.9,99.2);
    m.setscore(99.0);
    m.display();
    return 0;
}

