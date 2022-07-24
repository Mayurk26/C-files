#include<iostream>
using namespace std;
class complex
{
    int x,y;
public:
    complex()
    {
        
        x=0;
        y=0;
        
    }
    friend void operator>>(complex &u,complex &v)
    {
        
        
        cout<<"please enter real value for first no.(x1)=>"<<endl;
        cin>>u.x;
        cout<<"please enter imaginary value for first no.(y1)=>"<<endl;
        cin>>u.y;
        cout<<"please enter real value for second no.(x2)=>"<<endl;
        cin>>v.x;
        cout<<"please enter imaginary value for second no.(y2)=>"<<endl;
        cin>>v.y;
    }
    friend void operator<<(complex &u,complex &v)
    {
        cout<<"first complex no is=>"<<u.x<<"+"<<u.y<<"i"<<endl;
        cout<<"second complex no is=>"<<v.x<<"+"<<v.y<<"i"<<endl;
    }
    friend void operator +(complex &u,complex &v)
    {
        complex add;
        add.x=u.x+v.x;
        add.y=u.y+v.y;
        if(add.y>0)
        cout<<"addition of given complex nos. is=>"<<add.x<<"+"<<add.y<<"i"<<endl;
        else
        cout<<"addition of given complex nos. is=>"<<add.x<<(-1)*add.y<<"-i"<<endl;
    }
    friend void operator -(complex &u,complex &v)
    {
        complex sub;
        sub.x=u.x-v.x;
        sub.y=u.y-v.y;
        if(sub.y>0)
        cout<<"substraction of given complex nos. is=>"<<sub.x<<"+"<<sub.y<<"i"<<endl;
        else
        cout<<"substraction of given complex nos. is=>"<<sub.x<<"+"<<(-1)*sub.y<<"-i"<<endl;
    }
    friend void operator *(complex &u,complex &v)
    {
        complex mul;

        mul.x=(u.x*v.x)-(u.y*v.y);
        mul.y=(u.x*v.y)-(v.x*u.y);
        if(mul.y>0)
        cout<<"multiplication of given complex nos. is=>"<<mul.x<<"+"<<mul.y<<"i"<<endl;
        else
        cout<<"multiplication of given complex nos. is=>"<<mul.x<<"+"<<(-1)*mul.y<<"-i"<<endl;
        
    }
};
int main()
{
    char ch;
    char des;
    complex s1,s2;
    operator >>(s1,s2);
    operator <<(s1,s2);
    do
    {
        cout<<"choose the operation to be performed:"<<endl;
        cout<<"(+)addition"<<endl;
        cout<<"(-)substraction"<<endl;
        cout<<"(*)multiplication"<<endl;
        cin>>ch;
        switch(ch)
        {
            case '+':
            s1+s2;
            break;
            case '-':
            s1-s2;
            break;
            case '*':
            s1*s2;
            break;
            default:
            cout<<"invalid operation"<<endl;
                
        }
        cout<<"Do you like to perform operation again? =>(Y/N)"<<endl;
        cin>>des;
    }while(des=='y'||des=='Y');
}
