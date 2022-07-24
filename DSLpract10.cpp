#include<iostream>
using namespace std;
#define MAX 10

int front=-1;
int rear=-1;
class queue
{
    private:
    int que[MAX];
    public:
    void addq(int);
    void delq();
    void display();

};

void queue :: addq(int n)
{
    if(rear==MAX-1)
    {
        cout<<"\nQueue is full";
    }
    else
    {
        rear++;
        que[rear]=n;
    }
}

void queue :: display()
{
    cout<<"Elements in queue are : ";
    for(int i=front+1;i<=rear;i++)
    {
        cout<<que[i];
    }
    cout<<endl;
}

void queue :: delq()
{
    if(front == rear)
    {
        cout<<"\nqueue is empty";
    }
    else
    {
        front++;
        cout<<"removed element is :"<<que[front]<<endl;
        
    }
}

int main()
{
    queue a;
    int n;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter element :";
        cin>>n;
        a.addq(n);
    }
    a.display();
    a.delq();
    a.delq();
    a.display();
}