//Initialization list in constructor

/* syntax
 constructor(argu list): initialization section
 {
     assignment + other code
 }
 */
#include<iostream>
using namespace std;

class Test
{
    public:
    int a,b;
    //Test(int i, int j):a(i), b(j)
    //Test(int i, int j):a(i),b(i+j)
    //Test(int i, int j):a(i),b(2*j)
    //Test(int i, int j):a(i),b(i+j)
    /*Test(int i, int j):b(j) ,a(i+b)   //this will throw garbage value because order of declaring variables is diff , a should be first
    {
        cout<<"executed succesfully"<<endl;
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;
        

    }*/
    Test(int i, int j):a(i)   //this will also work
    {

        b=j;
        cout<<"executed succesfully"<<endl;
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;
        

    }

};
int main()
{
    Test m(5,8);
    return 0;

}