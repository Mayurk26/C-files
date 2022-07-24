/*#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next,*head=NULL,*temp;
    void accept();
    void display();
}ob;

void node::accept()
{
    node *ptr;
    ptr=new node;
    cin>>ptr->info;
    ptr->next=NULL;
    temp=head;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
    }
}

void node::display()
{
    node *temp;
    cout<<"\nElements in linked list are :\n";
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->info;
        temp=temp->next;
    }
}

int main()
{
    int ch;
    char choice;
    do
    {
        cout<<"\npress 1 to accept";
        cout<<"\npress 2 to display\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            ob.accept();
            break;
            case 2:
            ob.display();
            break;

        }
        cout<<"\ndo you want to run the accept again?";
        cin>>choice;

    }
    
    while(choice=='y' || choice=='Y');
    
}*/

#include<iostream>
#include<string>
using namespace std;

struct node
{
    string name;
    node *next,*head=NULL,*temp;
    void accept();
    void display();

}ob;

void node ::accept()
{
    node *ptr;
    ptr= new node;
    cin>>ptr->name;
    ptr->next=NULL;
    temp=head;
    if(head==NULL)
    {
        head=ptr;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
    }
}

void node:: display()
{
    node *temp;
    cout<<"elements are:- ";
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->name;
        temp=temp->next;

    }

}

int main()
{
    int ch;
    char choice;
    do
    {
        cout<<"\npress 1 to accept";
        cout<<"\npress 2 to display\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            ob.accept();
            break;
            case 2:
            ob.display();
            break;

        }
        cout<<"\ndo you want to run the accept again?";
        cin>>choice;

    }
    
    while(choice=='y' || choice=='Y');
    
}
    