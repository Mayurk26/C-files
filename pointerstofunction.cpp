#include<iostream>
using namespace std;
/*
int add(int a,int b)
{
    return a+b;
}

int main()
{
    int(*funcptr)(int , int);
    funcptr=add;

    int sum=funcptr(5,5);

    cout<<"value of sum is:"<<sum;
    return 0;

}
*/

//passing pointers to function
/*
int global_var=40;

//func to change ptr value
void changeptrvalue(int* pp)
{
    pp=&global_var;
}

int main()
{
    int var=23;
    int* ptr_to_var=&var;

    cout<<"passing pointer to function:"<<endl;
    cout<<"Before:"<<*ptr_to_var<<endl;

    changeptrvalue(ptr_to_var);
    cout<<"After:"<<*ptr_to_var<<endl;
    return 0;


}
*/

//return pointer from function

int *abc();    //func returns a pointer of type int

int main()
{
    int *ptr;
    ptr=abc();
    cout<<*ptr;
    return 0;

}

int *abc()
{
    int x=100,*p;
    p=&x;
    return p;
}

