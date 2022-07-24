#include<iostream>
using namespace std;
/*
int main()
{
    int age=50;
    int* ptr=&age;
    cout<<age<<endl;
    cout<<&age<<endl;
    cout<<ptr<<endl;            // * =Dereference operator  
    cout<<*ptr<<endl;          // & =Address of operator

    *ptr=100;      //updating ptr value
    cout<<age<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    int** c=&ptr;     //pointer to pointer
    cout<<**c<<endl;
}
*/

//pointer to object

class simple
{
    public:
    int a;
};

int main()
{
    simple obj;
    simple *ptr;
    ptr=&obj;
    cout<<obj.a<<endl;
    cout<<ptr->a;
}


