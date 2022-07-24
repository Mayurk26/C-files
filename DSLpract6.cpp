#include<iostream>
using namespace std;
struct node
{
    char name[50];
    int PRN;
    node *next,*head=NULL;
    void accept();
    void display();
    void Delete();
    void members();
    void reverse();
    void concatenate(node *a,node *b);
    
    
}ob,ob1;

void node :: reverse()
{
    node * cn = head;
    node *next=NULL;
    node *prev=NULL;
    while(cn != NULL)
    {
        next=cn->next;
        cn->next=prev;
        prev=cn;
        cn=next;
    }
    head = prev;

}

void node :: concatenate(node *a,node *b)
{
    if( a != NULL && b!= NULL )
        {
            if (a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
}

void node::accept()
{
    node *ptr,*temp;
    ptr=new node;
    if(head==NULL)
    {
        cout<<"\n Enter Presidents information:";
        cin>>ptr->name;
        cin>>ptr->PRN;
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
        if(head->next==NULL)
        {
            cout<<"\n Enter secretary information: ";
            cin>>ptr->name;
            cin>>ptr->PRN;
            ptr->next=NULL;
            head->next=ptr;
        }
        else
        {
            cout<<"\n Enter members information:";
            cin>>ptr->name;
            cin>>ptr->PRN;
            ptr->next=NULL;
            temp=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;

            }
            ptr->next=temp->next;
            temp->next=ptr;
        }
    }
}

void node::display()
{
   node *temp;
   cout<<"\n The pinnacle club information is :\n";
   temp=head;
   while(temp!=NULL)
   {
       cout<<"\n";
       cout<<temp->name<<" ";
       cout<<temp->PRN;
       temp=temp->next;
   }
}

void node:: Delete()
{
     node *temp,*n;
     int prn;
     cout<<"\nEnter PRN to delete :";
     cin>>prn;
     if(head->PRN==prn)
     {
         temp=head;
         head->next=head;
         delete temp;
     }
     else{
         temp=head;
         while(temp->next->PRN!=prn)
         {
             temp=temp->next;
         }
         n=temp->next;
         temp->next=temp->next->next;
         delete n;
     }
}

void node :: members()
{
    node *temp;
    int count=0;
    temp=head;
    
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<"Total no of members of club are : "<<count;

}




int main()
{
    int ch;
    char choice;
    do
    {
        cout<<"\nPress 1. to insert president, secretary and members: ";
        cout<<"\npress 2. to display Pinnacle club:";
        cout<<"\npress 3. to delete the member:";
        cout<<"\npress 4. to compute total no of members : ";
        cout<<"\npress 5. to display reverse :";
        cout<<"\npress 6, to insert president, secretary and members of list2:";
        cout<<"\npress 7. to concatenate the two lists:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            ob.accept();
            break;
            case 2:
            ob.display();
            break;
            case 3:
            ob.Delete();
            break;
            case 4:
            ob.members();
            break;
            case 5:
            cout<<"\nReverse display "<<endl;
            ob.reverse();
            break;
            case 6:
            ob1.accept();
            break;
            case 7:
            cout<<"\nconcatenated lists :"<<endl;
            ob1.concatenate(ob.head,ob1.head); 
        }
        cout<<"\nDo you want to continue press Y or y ";
        cin>>choice;

    }while(choice=='Y' || choice=='y');
}