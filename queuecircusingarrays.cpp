//Circular linked list using arrays

#include<iostream>
using namespace std;

#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if(front==-1 && rear ==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if(((rear+1)%N)==front)
    {
        cout<<"\n queue is full";
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"\nqueue is empty";
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<"\nRemoved element is :"<<queue[front]<<endl;
        front=(front+1)%N;
    }
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        cout<<"\nqueue is empty";
    }
    else{
        cout<<"queue is :";
        while(i!=rear)
        {
            cout<<queue[i]<<" ";
            i=(i+1)%N;
        }
        cout<<queue[rear];

    }
}

void peek()
{
    if(front==-1 && rear==-1)
    {
        cout<<"\nqueue is empty";
    }
    else{
        cout<<queue[front];
    }
}

int main()
{
    enqueue(10);
    enqueue(22);
    enqueue(31);
    enqueue(12);
    display();
    dequeue();
    display();
}
