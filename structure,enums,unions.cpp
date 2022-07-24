#include<iostream>
using namespace std;

struct employee
{
    int id;
    char favchar;
    float salary;
};



int main()
{
    struct employee mayur;
    mayur.id=1;
    mayur.favchar='c';
    mayur.salary=36788;
    cout<<mayur.salary<<endl;
    return 0;
}