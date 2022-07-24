#include<iostream>
#include<string>
using namespace std;

/*class data                   //multilevel inheritance
{
    public:
    string name="mayur";
    int rollno=43;
    void add(int x,int y)        // class data is inherit by id and id is inherit by info is called as multilevel inheritance
    {
       // x=10;y=20;
        int sum=x+y;
        cout<<sum;
    }
};

class id:public data{

};

class info:public id
{
    public:
    char div='A';

};

int main()
{
    info obj1;
    obj1.add(10,20);
    cout<<"\nName: "<<obj1.name<<"\nRollno:"<<obj1.rollno<<"\ndiv:"<<obj1.div<<endl;
    return 0;
}


//multiple inheritance
//A class can also be derived from more than one base class, using a comma-separated list:

class myclass1
{
    public:
    void myfunc()
    {
        cout<<"content in baseclass 1";
    }
};

class myclass2
{
    public:
    void myfunc2()
    {
        cout<<"\n content in baseclass 2";
    }
};

class child:public myclass1,public myclass2
{};

int main()
{
    child obj;
    obj.myfunc();
    obj.myfunc2();
    return 0;
}*/

//access specifier protected can be access in inherited class

// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
//class programmer:public Employee{   ->it will also work
class Programmer: protected Employee {   //protected data can be inherited
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}
