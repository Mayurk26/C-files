#include<iostream>
using namespace std;

struct Node
{
   int data;

   Node *next;
};

Node *front = NULL;
Node *rear = NULL;


bool isempty()
{
 if(front == NULL && rear == NULL)
 return true;
 else
 return false;
}

void enqueue ( int value )
{
    Node *newnode = new Node();
    newnode->data= value;
    newnode->next = NULL;

   if( front == NULL )
  {
  front = newnode;
  rear = newnode;
 }
 else
 {
  rear ->next = newnode;
  rear = newnode;
 }
}


void dequeue ( )
{
    if( isempty() )
    cout<<"Queue is empty\n";
    else
 
    if( front == rear)
   {
   free(front);
   front = rear = NULL;
  }
  else
  {
   Node *newnode = front;
  front = front->next;
  delete(newnode);
 }
}

void showfront( )
{
    if( isempty())
    cout<<"Queue is empty\n";
    else
    cout<<"element at front is:"<<front->data;
}


void displayQueue()
{
    if (isempty())
    cout<<"Queue is empty\n";
   else
 {
    Node *newnode = front;
    while( newnode !=NULL)
   {
   cout<<newnode->data<<" ";
   newnode=newnode->next;
  }
 }
}

//Main Function
int main()
{
 int choice, flag=1, value;
 while( flag == 1)
 {
  cout<<"\n1.enqueue 2.dequeue 3.showfront 4.displayQueue 5.exit\n";
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: showfront();
          break;
  case 4: displayQueue();
          break;
  case 5: flag = 0;
          break;
  }
 }

 return 0;
}

