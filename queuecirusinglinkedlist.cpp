//Circular queue using linkedlist

#include<iostream>
using namespace std;
 
struct node
{
    int data;
    node *next;
};

node *front=NULL;
node *rear=NULL;

void enqueue(int x)
{
    node *newnode;
    newnode =new node;
    newnode->data=x;
    newnode->next=NULL;
    if(rear==NULL && front==NULL)
    {
        rear=front=newnode;
        rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void dequeue()
{
    node *temp;
    temp=front;
    if(rear==NULL && front==NULL)
    {
        cout<<"\nqueue is empty";
    }
    else if(rear==front)
    {
        rear=front=NULL;
        delete(temp);
    }
    else{
        front=front->next;
        rear->next=front;
        delete(temp);
    }
}

void peek()
{
    if(rear==NULL && front==NULL)
    {
        cout<<"\nqueue is empty";
    }
    else{
        cout<<front->data;
    }
}

void display()
{
    node *temp;
    temp=front;
    if(rear==NULL && front==NULL)
    {
        cout<<"\nqueue is empty";
    }
    else{
        while(temp->next!=front)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data;
        cout<<endl;
    }
}

int main()
{
    enqueue(12);
    enqueue(15);
    enqueue(20);
    enqueue(32);
    display();
    dequeue();
    display();
}