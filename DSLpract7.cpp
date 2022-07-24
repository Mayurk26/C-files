#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *Butter,*Vanilla,*temp,*cur;
    void addlast1(int);
    void addlast2(int);
    void display1();
    void display2();
    
}ob;

void node::addlast1(int data)
{
    node *cur;
    cur =new node;
    cur=Butter;
    node *ptr=new node();
    ptr->data =data;
    
    ptr->next =NULL;
    if(Butter==NULL)
    {
        Butter=ptr;
    }
    else{
        while(cur->next!=NULL)
        {
            
            cur=cur->next;
        }
        cur->next=ptr;
    }
}

void node::addlast2(int data)
{
    node *cur=new node;
    cur= Vanilla;
    node *ptr=new node();
    ptr->data=data;
    ptr->next=NULL;
    if(Vanilla==NULL)
    {
        Vanilla=cur;
    }
    else{
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=ptr;
    }

}

void node ::display1()
{
    node *cur=Butter;
    while(cur){
        if(cur->next==NULL)
        {
            cout<<cur->data;
        }
        else{
            cout<<cur->data<<",";
            cur=cur->next;
        }
        cout<<endl;cout<<endl;
    }
}

void node :: display2()
{
    node *cur=Vanilla;
    while(cur){
        if(cur->next==NULL)
        {
            cout<<cur->data;
        }
        else{
            cout<<cur->data<<",";
            cur=cur->next;
        }
        cout<<endl;
    }
}

     






int main()
{
    node ob;
    int ch,no,flag=1;
    char choice;
   

    while(flag==1){
        cout<<"\n 1.ADD students who like butterscotch\n";
        cout<<" 2.ADD students who like vanilla\n";
        cout<<" 3.Display students who like butterscotch\n";
        cout<<" 4.Display students who like vaniila\n";
        
        cin>>ch;
        switch(ch)
        {
            case 1:
              cout<<"\nEnter the rollno of students : ";
              cin>>no;
              ob.addlast1(no);
              break;

            case 2:
              cout<<"\nEnter the rollno of students : ";
              cin>>no;
              ob.addlast2(no);
              break;

            case 3:
              cout<<"\nRollno of students who like butterscotch : ";
              ob.display1();
              break;

            case 4:
              cout<<"\nRollno of students who like vanilla : ";
              ob.display2();
              break;
              case 5:
              flag=0;
              break;
            
        }
        

    }
    
    return 0;
}