//for this we need the two stacks
#include<iostream>
using namespace std;

#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1;
int Count=0;
void push1(int data);
void push2(int data);
int pop1();
int pop2();

void enqueue(int x)
{
     push1(x); 
     Count++;
}

void push1(int data)
{
    if(top1==N-1)
    {
        cout<<"\nstack is overflow";
    }
    else{
        top1++;
        s1[top1]=data;
    }
}
void push2(int data)
{
    if(top2==N-1)
    {
        cout<<"\nstack is overflow";
    }
    else{
        top2++;
        s2[top2]=data;
    }
}
int pop1()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}

void dequeue()
{
    int i,a,b;
    if(top1==-1 && top2==-1)
    {
        cout<<"\nqueue is empty";
    }
    else{
        for(i=0;i< Count;i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        cout<<"\nthe dequeued element is :"<<b;
        Count--;
        for(i=0;i<Count;i++)
        {
            a=pop2();
            push1(a);
        }

    }
}

void display()
{
    int i;
    cout<<"\nelements n queue are :";
    for(i=0;i<=top1;i++)
    {
        cout<<s1[i]<<" ";
    }
}

int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
}