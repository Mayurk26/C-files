#include<iostream>
using namespace std;

#define size 3

int arr[size];
int front=0;
int rear=0;

int enqueue(int val)
{
    if(rear==size)
    {
        cout<<"queue is full";
    }
    else{
        arr[rear]=val;
        cout<<val;
        rear++;
    }
}

void dequeue()
{
    if(front==rear)
    {
        cout<<"queue is empty";
    }
    else{
        cout<<"\nremoved element is :";
        cout<<arr[front]<<endl;
        front++;
    }
}

void display()
{
    if(front==rear==0)
    {
        cout<<"\nqueue is empty";
    }
    else{
        for(int i=front;i<rear+1;i++)
        {
            cout<<arr[i];
        }
    }
}

int main()
{
    //int n=10;
     enqueue(10);
     enqueue(15);
     enqueue(20);
    display();
    cout<<endl;
    dequeue();
    display();
    return 0;
}
