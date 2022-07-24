 #include <iostream>
 #include<string> 
 using namespace std; 
 /*int main() 
 { 
     int i; 
     char *arr[] = {"C", "C++", "Java", "VBA"}; 
     char *(*ptr)[4] = &arr; 
     cout << ++(*ptr)[2]; 
     return 0; 
     }


class department
{
    public:
    string dept;
    department(string d):dept(d){}
    void getname()
    {
        cout<<dept;
    }
};
class student:private department
{
    public:
    string name;
    student(string n="Not entered",string d="ATDC"):name(n),department(d){}
    department::getname;
};

int main()
{
    student s("CSE");
    s.getname();
    return 0;
}*/

class base
{
    public:
    void funcf1(int i){
        cout<<"in base func 1 ";
    }
    void funcf2(int i){
        cout<<"in base func2";
    }
};
class derived:public base{
    public:
    void funcf1(int i){
        cout<<"in derived funcf1";
    }
    void funcf1(string s)
    {
        cout<<"func f1 string";
    }
    void funcf3(int i)
    {
        cout<<"in derived func f3";
    }
    
};

int main()
{
    base b;
    derived d;
    d.funcf1(3);
    d.funcf1("Blue");
    d.funcf3(3);
    d.funcf2(3);
    return 0;

}