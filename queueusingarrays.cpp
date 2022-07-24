#include<iostream>
using namespace std;
#define N 6

int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if(rear==N-1)
    {
        cout<<"\nqueue is full";
    }
    else if(front==-1 && rear==-1){
         front=rear=0;
         queue[rear]=x;
    }
    else{
        
        //cout<<"enter element :";
        //cin>>x;
        rear++;
        queue[rear]=x;
    }

}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"\nqueue is empty";
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        cout<<"\nremoved element is";
        cout<<queue[front];
        front++;
    }
}

void peek()
{
    if(front==-1 && rear==-1)
    {
        cout<<"\nqueue is empty";
    }
    else{
        cout<<"\nThe topmost element is : ";
        cout<<queue[rear];
    }
}

void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        cout<<"\nqueue is empty";
    }
    else{
    for(i=front;i<rear+1;i++)
    {
        cout<<queue[i];
    }
    }
}

int main()
{
    enqueue(10);

    enqueue(20);
    enqueue(30);
    
    display();
    
    peek();

    dequeue();
    cout<<endl;
    display();
            

}