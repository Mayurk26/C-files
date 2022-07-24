//Access specifier
//public - members are accessible from outside the class
//private - members cannot be accessed (or viewed) from outside the class
//protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

//Encapsulation
//Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private 
//If you want others to read or modify the value of a private member, you can provide public get and set methods.
//use of get set methods to access private members

#include<iostream>
using namespace std;

class employee
{
    private:
      int salary;
    public:
      void setsalary(int s)
      {
          salary=s;
      }
      int getsalary()
      {
          return salary;
      }

};
int main()
{
    employee obj1;
    obj1.setsalary(1000000);
    cout<<obj1.getsalary();
    return 0;

}