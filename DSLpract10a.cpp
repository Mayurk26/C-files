#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next,*front =NULL,*rear=NULL;
    void addq(int);
    void delq();
    void display();
};

void node :: addq(int x)
{
    node *ptr;
    ptr=new node;
    ptr->data = x;
    ptr->next = NULL;
    if(rear==NULL)
    {
        rear=ptr;
        front=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }
}


void node :: display()
{
    node *ptr;
    if(front==rear)
    {
        cout<<"\nqueue is empty";
    }
    ptr=front;

    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
    cout<<endl;
}

void node:: delq()
{
    node *ptr;
    if(front==rear)
    {
        cout<<"\nqueue is empty";
    }
    else
    {
        front=front->next;
    }
}


int main()
{
    node a;
    int x;
    for(int i=0;i<5;i++)
    {
        cout<<"enter element : ";
        cin>>x;
        a.addq(x);
    }
    cout<<"\nElements in queue are : ";
    a.display();
    for(int i=0;i<2;i++)
    {
        a.delq();
    }
    cout<<"\nElements remain after deletion are : ";
    a.display();
}