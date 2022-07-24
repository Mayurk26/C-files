/*#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node *top=NULL;

    void push(int );
    void display();
    void peep();
    void pop();
};

//node *top=NULL;

void node :: push(int x)
{
    node * newnode;
    newnode= new node;
    newnode->data=x;
    newnode->next = top;
    top = newnode;

}

void node ::display()
{
    node *temp;
    temp=top;
    if(top==NULL)
    {
        cout<<"\nlist is empty";
    }
    else{
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        }


    }
}

void node :: peep()
{
    if(top==NULL)
    {
        cout<<"stack is underflow";
    }
    else{
        cout<<"the top item is "<<top->data;

    }
}

void node :: pop()
{
    node *temp;
    temp=top;
    if(top==NULL)
    {
        cout<<"stack is underflow";
    }
    else{
        cout<<"remove element is "<<top->data;
        top=top->next;
    }
}

int main()
{
    node m;
    m.push(10);
    m.push(20);
    m.push(30);
    m.push(40);
    m.pop();
    m.display();
}*/

#include <iostream>
using namespace std;

//Structure of the Node
class Node
{
    public:
int data;

Node *link;
Node *top = NULL;
bool isempty();
void push (int value);
void pop ();
void showTop();
void displayStack();
};

// top pointer to keep track of the top of the stack
//Node *top = NULL;

//Function to check if stack is empty or not
bool Node:: isempty()
{
 if(top == NULL)
 return true; 
 else
 return false;
}

//Function to insert an element in stack
void Node ::push (int value)
{
  Node *ptr = new Node();
  ptr->data = value;
  ptr->link = top;
  top = ptr;
}

//Function to delete an element from the stack
void Node :: pop ( )
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  Node *ptr = top;
  top = top -> link;
  delete(ptr);
 }
}

// Function to show the element at the top of the stack
void Node :: showTop()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
  cout<<"Element at top is : "<< top->data;
}

// Function to Display the stack
void Node ::displayStack()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  Node *temp=top;
  while(temp!=NULL)
  {   cout<<temp->data<<" ";
   temp=temp->link;
  }
  cout<<"\n";
 }
 }

// Main function
int main()
{
 //Node j;
 int choice, flag=1, value;
Node j;
 //Menu Driven Program using Switch
 while( flag == 1)
 {
 cout<<"\n1.Push 2.Pop 3.showTop 4.displayStack 5.exit\n";
 cin>>choice;
 switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         j.push(value);
         break;
 case 2: j.pop();
         break;
 case 3: j.showTop();
         break;
 case 4: j.displayStack();
         break;
 case 5: flag = 0;
         break;
 }
 }

return 0;
}