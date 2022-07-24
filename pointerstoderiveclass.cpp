//pointers to derived  class

#include<iostream>
using namespace std;

class Baseclass
{
    public:
    int varbase;
    void display()
    {
        cout<<"displaying the base class varbase : "<<varbase<<endl;
    }
};

class Derivedclass : public Baseclass
{
    public:
    int varderived;
    void display()
    {
        cout<<"displaying the base class varbase : "<<varbase<<endl;
        cout<<"displaying the base class varderived : "<<varderived<<endl;
    }
};

int main()
{
    Baseclass *base_ptr;
    Baseclass objbase;
    Derivedclass objderived;
    base_ptr = &objderived;
    base_ptr->varbase=54;
    //base_ptr->varderived=10;   //this will give error
    base_ptr->display();

    Derivedclass *derived_ptr;
    derived_ptr = &objderived;
    derived_ptr->varbase=10;
    derived_ptr->varderived=20;
    derived_ptr->display();
    

    return 0;
}