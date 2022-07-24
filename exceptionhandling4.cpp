// destructor and exception handling
//when an exception is thrown inthe class , the destructor is called automatiacally before the catch block gets executed

#include<iostream>
using namespace std;

class sample1
{
    public:
    sample1()
    {
        cout<<"construct the object of sample1\n";
    }
    ~sample1()
    {
        cout<<"destruct the object of sample1\n";
    }
};

class sample2
{
    public:
    sample2()
    {
        int i;
        cout<<"construct the object of sample2\n";
        throw i;
    }
    ~sample2()
    {
        cout<<"destruct the object of sample2\n";
    }
};

int main()
{
    try{
    sample1 s1;
    sample2 s2;
    }
    catch(int i){
          cout<<"caught "<<i<<endl;
    }
}