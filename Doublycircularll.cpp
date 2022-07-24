#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
}*head,*tail;

void insertend()
{
    node *newnode;
    newnode=new node;
    cout<<"enter data :";
    cin>>newnode->data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
        head->next=head;
        head->prev=head;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
    }
}
void insertbeg()
{
    node *newnode;
    newnode=new node;
    cout<<"enter data :";
    cin>>newnode->data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
        head->next=head;
        head->prev=head;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        tail->next=newnode;
        newnode->prev=tail;
        head=newnode;
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
    node *newnode,*temp;
    int pos,i=1,l;
    cout<<"\nenter the position : ";
    cin>>pos;
    l=getlength();
    temp=head;
    if(pos<0 || pos>l)
    {
        cout<<"\ninvalid position";
    }
    else if(pos==1){
        insertbeg();
    }
    else{
        newnode=new node;
        cout<<"enter data : ";
        cin>>newnode->data;
        newnode->next=NULL;
        //temp=head;
        while(i<pos-1)
        {
            
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        newnode->next->prev=newnode;


    }

}

void delbeg()
{
    node *temp,*todelete;
    temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    todelete=head;
    temp->next=head->next;
    head->next->prev=temp;
    head=head->next;
    delete(todelete);
}

void delend()
{
    node *temp;
    temp=tail;
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else{
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        delete(temp);
    }
    
}



void display()
{
    node *temp;
    temp=head;
    cout<<"\nelements in list are : ";
    if(head==NULL)
    {
        cout<<"\nlist is empty";
    }
    else{
        while(temp->next!=tail->next)
        {
           cout<<temp->data<<" ";
            temp=temp->next;
            
        }
        cout<<temp->data;
    }
}

void delbypos()
{
    node *temp;
    temp=head;
    int pos,i=1,l;
    cout<<"\nenter position :";
    cin>>pos;
    if(pos<1 || pos>l )
    {
        cout<<"\ninvalid position";
    }
    else if(pos==1)
    {
        delbeg();
    }
    else{
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        if(temp->next==head)
        {
            tail=temp->prev;
            delete(temp);
        }
        else{
            delete(temp);
        }
        
    }
}

int main()
{
    insertend();
    insertend();
    insertend();
    insertend();
    insertafter();
    insertbeg();
    display();

    delbeg();
    delend();
    delbypos();
    display();
}