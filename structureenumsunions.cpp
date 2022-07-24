#include<iostream>
using namespace std;
//structures have limitations
//members are public
//no methods

/*struct employee
{
    int id;
    char favchar;
    float salary;
};



int main()
{
    struct employee mayur;
    struct employee rahul;
    struct employee abhi;
    mayur.id=1;
    mayur.favchar='c';
    mayur.salary=36788;
    cout<<mayur.salary<<endl;
    return 0;
}*/
   //shortcut one - use of 'typedef'

/*typedef struct employee
{
    int id;
    char favchar;
    float salary;
}ep;  */               //use of type def keyword

union money
{
    int rice;
    float per;
};

int main()
{
    //ep mayur;
    //ep rahul;
    //ep abhi;
    union money m1,m2;

    m1.rice=34;
    m2.per=9.5;
    //mayur.id=1;
    //mayur.favchar='c';
    //mayur.salary=36788;
    //cout<<mayur.salary<<endl;
    cout<<m1.rice<<endl;
    cout<<m2.per<<endl;
    return 0;

}

//enum



