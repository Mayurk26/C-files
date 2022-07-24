#include<iostream>
#include<string.h>
using namespace std;

struct node
{
    int flag;
    char name[20];
    node *down;
    node *next;
};

class GLL
{
    node *head=NULL,*ptr,*temp,*t1,*t2;
    public:
    node *create();
    void insert_book();
    void insert_chapter();
    void insert_section();
    void insert_subsection();
    void Display();
}ob;

node *GLL :: create()
{
    ptr=new node;
    ptr->flag=0;
    cout<<"\nEnter the name : ";
    cin>>ptr->name;
    ptr->down=NULL;
    ptr->next=NULL;
    return ptr;
}

void GLL :: insert_book()
{
    t1 = create();
    if(head==NULL)
    {
        head=t1;
    }
    else{
        cout<<"\nBook is already present";
    }
}

void GLL :: insert_chapter()
{
    int n;
    if(head==NULL)
    {
        cout<<"\nBook is not exist";
    }
    else{
        cout<<"\nHow many chapters do you want to insert : ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            t1=create();
            if(head->flag==0)
            {
                head->down=t1;
                head->flag= 1;
            }
            else{
                temp=head;
                temp=temp->down;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=t1;
            }
        }
    }
}

void GLL :: insert_section()
{
    char ch[20];
    int n;
    if(head==NULL)
    {
        cout<<"\nBook is not exist";
    }
    else{
        cout<<"\n Enter the name of chapter in which the section is to be inserted : ";
        cin>>ch;
        temp=head;
        if(head->flag==0)
        {
            cout<<"\nThere is no chapters";
        }
        else{
            temp=temp->down;
            while(temp!=NULL)
            {
                if(strcmp(ch,temp->name)==0)
                {
                    cout<<"\nHow many sections you want to insert : ";
                    cin>>n;
                    for(int i=0;i<n;i++)
                    {
                        t1=create();
                        if(temp->flag==0)
                        {
                            temp->down=t1;
                            temp->flag=1;
                        }
                        else{
                            t2=temp->down;
                            while(t2->next!=NULL)
                            {
                                t2=t2->next;
                            }
                            t2->next=t1;
                        }
                    }
        
                    
                }
                temp=temp->next;
            }
        }

    }
}
/*
void GLL :: insert_subsection()
{
    char ch[20];
    int m;
    if(head==NULL)
    {
        cout<<"\nBook is not present";
    }
    else{
        if(head->flag==0)
        {
            cout<<"\nchapters are not present";
        }
        else{
            temp=head;
            temp=temp->down;
            while(temp!=NULL)
            {
                if(temp->flag==0)
                {
                    cout<<"\nsections are not present";
                }
                else{
                    cout<<"\nEnter the name of the section in which the subsection is to be inserted : ";
                    cin>>ch;
                    temp=head;
                    temp=temp->down;
                    while(temp!=NULL)
                    {
                        if(strcmp(ch,temp->name)==0)
                        {
                            cout<<"\nHow many subsections you want to insert : ";
                            cin>>m;
                            for(int i=0;i<m;i++)
                            {
                                t1=create();
                                if(temp->flag==0)
                                {
                                    temp->down=t1;
                                    temp->flag=1;
                                }
                                else{
                                    t2=temp->down;
                                    while(t2->next!=NULL)
                                    {
                                        t2=t2->next;
                                    }
                                    t2->next=t1;
                                }
                            }
                        }
                        temp=temp->next;
                    }
                }
                temp=temp->next;
            }
        }
    }
}
*/

void GLL :: insert_subsection()
{     
    char ch[20];
    int n;
    if(head==NULL)
    { 
        cout<<"\n Book is not present";   
    }
    else
    {    
        cout<<"\n Enter the name of chapter on which  you want to enter the section : ";
        cin>>ch;
                
        temp=head;
        if(temp->flag==0)
        {   
            cout<<"\n chapters are not present";
        }
        else
        {    
            temp=temp->down;
            while(temp!=NULL)
            { 
                if(!strcmp(ch,temp->name))
                {       
                    cout<<"\n enter name of section in which you want to enter the sub section : ";
                    cin>>ch;
                        
                    if(temp->flag==0)
                    {   
                        cout<<"\n sections are not present ";   
                    }
                    else
                    {       
                        temp=temp->down;
                        while(temp!=NULL)
                        {
                            if(!strcmp(ch,temp->name))
                            {
                                cout<<"\n how many subsections you want to enter : ";
                                cin>>n;
                                for(int i=0;i<n;i++)
                                {
                                   
                                    t1=create();
                                    if(temp->flag==0)
                                    {      
                                        temp->down=t1;
                                        temp->flag=1;  
                                        cout<<"\n";
                                        t2=temp->down;
                                                   
                                    }
                                    else
                                    {           
                                        cout<<"\n";
                                        while(t2->next!=NULL)
                                        {     
                                            t2=t2->next;          
                                        }
                                        t2->next=t1;                 
                                    }   
                                }                              
                                        break;

                            } 
                            temp=temp->next;
                        }
                    }       
                }
                         
                temp=temp->next;
            }
        }    
    }
}

void GLL :: Display()
{
    if(head==NULL)
    {
        cout<<"\nBook is not present";
    }
    else
    {
        temp=head;
        cout<<"\nName of Book : "<<temp->name;
        temp=temp->down;
        while(temp!=NULL)
        {
            cout<<"\n\n\tName of the chapter : "<<temp->name;
            t1=temp;
            if(temp->flag==1)
            {
                t1=t1->down;
                while(t1!=NULL)
                {
                    cout<<"\n\t\tName of  sections : "<<t1->name;
                    t2=t1;
                    if(t2->flag==1)
                    {
                        t2=t2->down;
                        while(t2!=NULL)
                        {
                            cout<<"\n\n\t\t\tName of subsections : "<<t2->name;
                            t2=t2->next;
                        }
                    }
                    t1=t1->next;
                }
            }
            temp=temp->next;
        }
    }
    
}


int main()
{
    int ch;
    while(1)
    {
        cout<<"\n\npress 1.to insert book";
        cout<<"\npress 2.to insert chapters";
        cout<<"\npress 3.to insert section";
        cout<<"\npress 4.to insert subsection";
        cout<<"\npress 5. Display";
        cout<<"\nEnter your choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
            ob.insert_book();
            break;

            case 2:
            ob.insert_chapter();
            break;

            case 3:
            ob.insert_section();
            break;

            case 4:
            ob.insert_subsection();

            case 5:
            ob.Display();
            break;
        }
    }
    return 0;
}