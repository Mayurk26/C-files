//deque using circular array
#include<iostream>
using namespace std;

#define N 5
int deque[N];
int front=-1,rear=-1;

void enqueue_front(int x)
{
    if((front==0 && rear==N-1)|| (front==rear+1))
    {
        cout<<"\nqueue is full";
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[front]=x;
    }
    else if(front==0)
    {
        front=N-1;
        deque[front]=x;
    }
    else{
        front--;
        deque[front]=x;
    }
}

void enqueue_rear(int x)
{
    if((front==0 && rear==N-1)|| (front==rear+1))
    {
        cout<<"\nqueue is full";
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[rear]=x;
    }
    else if(rear==N-1)
    {
        rear=0;
        deque[rear]=x;
    }
    else{
        rear++;
        deque[rear]=x;
    }
}
void display()
{
    int i=front;
    cout<<"\nelements in queue are :";
    while(i!=rear)
    {
        cout<<deque[i]<<" ";
        i=(i+1)%N;
    }
    cout<<deque[rear];
}

void getfront()
{
    if(front==-1 && rear==-1)
    { 
         cout<<"\nqueue is empty";
    }
    else{
        cout<<"\nthe element at front is :"<<deque[front];
    }
}

void dequeue_front()
{
    if(front==-1 && rear==-1)
    {
        cout<<"\nqueue is empty";
    }
    else if(front==rear)
    {
        cout<<"\nremoved element is :"<<deque[front];
        front=rear=-1;
    }
    else if(front==N-1)
    {
        cout<<"\nremoved element is :"<<deque[front];
        front=0;
    }
    else{
        cout<<"\nremoved element is :"<<deque[front];
        front++;
    }
}

void dequeue_rear()
{
    if(front==-1 && rear==-1)
    {
        cout<<"\nqueue is empty";
    }
    else if(front==rear)
    {
        cout<<"\nremoved element is :"<<deque[rear];
        front=rear=-1;
    }
    else if(rear==0)
    {
        cout<<"\nremoved element is :"<<deque[rear];
        rear==N-1;
    }
    else{
        cout<<"\nremoved element is :"<<deque[rear];
        rear--;
    }
}

int main()
{
    enqueue_rear(3);
    enqueue_rear(5);
    enqueue_front(6);
    enqueue_front(8);
    enqueue_rear(9);
    display();
    dequeue_front();
    dequeue_rear();
    display();
}