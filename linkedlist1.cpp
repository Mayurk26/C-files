#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next,*head=NULL,*temp;
    void accept();
    void display();

}obj;

void node::accept()
{
    node *New;
    New=new node;
    New->next=NULL;
    cin>>New->data;
    temp=head;
    if(head==NULL)
    {
        head=New;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=New;
    }
}

void node::display()
{
    node *temp;
    cout<<" the elements are : ";
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

int main()
{
    int c;
    char choice;
    do{
        cout<<"\npress 1. to accept:";
        cout<<"\npress 2. to display :";
        cin>>c;
        switch(c)
        {
            case 1:
            obj.accept();
            break;
            case 2:
            obj.display();
            break;
        }
        cout<<"\nDo you want to continue ?" ;
        cin>>choice;


    }
    while(choice=='y' );
}