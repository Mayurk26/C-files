//multilevel inheritance

#include<iostream>
using namespace std;

class student
{
    protected:
    int rollno;
    public:
    void setrollno(int);
    void getrollno(void);
};

void student::setrollno(int r)
{
    rollno=r;
}
void student::getrollno()
{
    cout<<"roll no is "<<rollno<<endl;
}

class exam:public student{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float, float);
    void getmarks(void);
};
void exam::setmarks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}
void exam::getmarks()
{
    cout<<"marks in maths "<<maths<<endl;
    cout<<"marks in physics "<<physics<<endl;
}

class result: public exam{
    float pert;
    public:
    void display(){
        getrollno();
        getmarks();
        cout<<"your percentage is "<<(maths+physics)/2<<endl;
    }
};

int main()
{
    result a;
    a.setrollno(10);
    a.setmarks(94.2,98.2);
    a.display();
    return 0;
}

