#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head=NULL,*tail=NULL;

void insertend()
{
    node *newnode,temp;
    newnode =new node;
    cout<<"enter data:";
    cin>>newnode->data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
        tail->next=head;
    }
    else{
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }
}

void insertbeg()
{
    node *newnode,temp;
    newnode =new node;
    cout<<"enter data:";
    cin>>newnode->data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
        tail->next=head;
    }else{
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }
}
int getlength()
{
    int pos=1;
    node *temp;
    temp=head;
    while(temp->next!=head)
    {
        
        temp=temp->next;
        pos++;
    }
    return pos;
}

void insertafter()
{
    node *newnode,*next,*temp;
    int pos,i,l;
    cout<<"\nenter the position : ";
    cin>>pos;
    l=getlength();
    if(pos<0 || pos>l)
    {
        cout<<"\ninvalid position";
    }
    else if(pos==1){
        insertbeg();
    }
    else{
        newnode=new node;
        cout<<"\nenter data: ";
        cin>>newnode->data;
        newnode->next=NULL;
        temp=head;
        while(i<=pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;

    }
}

void deleteAtHead(){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
 
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
 
    delete todelete;
}

void delend()
{
    node *curr,*prev;
    curr=head->next;
    prev=head;
    while(curr->next!=head)
    {
        curr=curr->next;
        prev=prev->next;
    }
    prev->next=curr->next;
    delete(curr);
}
void deletion(int pos){
 
    if(pos==1){
        deleteAtHead();
        return;
    }
      node* temp=head;
      int count=1;
 
      while(count!=pos-2){
          temp=temp->next;
          count++;
      }
 
      node* todelete=temp->next;
      temp->next=temp->next->next;
 
      delete todelete;
}

void display()
{
    node *temp;
    temp=head;
    cout<<"\nelements in list are:";
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}

int main()
{
    insertend();
    insertend();
    insertend();
    //getlength();
    insertbeg();
    insertafter();
    display();
    deleteAtHead();
    deletion(3);
    delend();
    //delend();
    //delbeg();

    display();
}