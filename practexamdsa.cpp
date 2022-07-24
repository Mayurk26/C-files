
#include<iostream>
using namespace std;

struct node
{   int roll;
    struct node *next;
};

class info
{        node *head1=NULL,*temp1=NULL,*head2=NULL,*temp2=NULL,*head=NULL,*temp=NULL,*h1=NULL,*head3=NULL,*temp3=NULL;
        int c,i,f,j,k;
       
        public:
    
            node  *create();
            void insert();
            void allstud();
            void vanila();
            void butters();
            void vanorbutter();
            void vanandbutter();
            void Notice();
            void onlyvanila();
            void onlybutters();
            void display();   

           
            
} ;        

node *info :: create()
{  
     node *p = new node;
     cout<<"Enter student rollno : ";
     cin>>c;
     p->roll = c;
     p->next=NULL;
     return  p;
} 

void info :: insert()
{ 
    node *p=create();
    if(head==NULL)
    {   
       head=p;
    }
    else
    {     temp=head;
          while(temp->next!=NULL)
          {    
            temp=temp->next;
          }
          temp->next=p;
    }        
         
}

void info :: display()
{  
      temp=head;
      while(temp->next!=NULL)
      { 
        cout<<" "<<temp->roll;
        temp=temp->next;
      } 
      cout<<" "<<temp->roll;
}

void info :: allstud()
{
       cout<<"Enter no. of students : ";
       cin>>k;
       head=NULL;
       for(i=0;i<k;i++)
       {    
          insert();
          h1=head;
          
       }  
       display();
       head=NULL;
}

void info :: vanila()
{
      cout<<"Enter no. of  students who like vanila : \n";
      cin>>k;
      head=NULL;
      for(i=0;i<k;i++)
      { 
         insert();
         head1 = head;
      } 
      display();
      head=NULL;
}
     
void info :: butters()
{
      cout<<"enter no. of students who like butterscotch: \n";
      cin>>j;
      for(i=0;i<j;i++)
      { 
        insert();
        head2 = head;
        
      } 
      display();
      head=NULL;
}
      
void info :: vanorbutter()
{    
        cout<<" students who like vanila or butterscotch : \n";
        temp1=head1;
        while(temp1!=NULL)
        {
            node *p=new node;
            p->roll=temp1->roll;
            p->next=NULL;     
            if(head3==NULL)
            {    
                head3=p;
            }
            else
            {       
                temp3=head3;
                while(temp3->next!=NULL)
                {    
                   temp3=temp3->next;  
                }
                temp3->next=p;
            }
       
            temp1=temp1->next;
        }
        temp2=head2;
        while(temp2!=NULL)
        {    
            f=0;
            temp1=head1;
            while(temp1!=NULL)
            {
                if(temp2->roll==temp1->roll)
                { 
                     f=1;                   
                }
                temp1=temp1->next;
            } 
       
        
    
            if(f==0)
            {  
                node *p=new node;
                p->roll=temp2->roll;
                p->next=NULL;     
                if(head3==NULL)
                {   
                    head3=p;
                }
                else
                {      
                   temp3=head3;
                   while(temp3->next!=NULL)
                   {    
                       temp3=temp3->next;   
                   }
                    temp3->next=p;
                }
            }
            temp2=temp2->next;     
        }
        temp3=head3;
        while(temp3->next!=NULL)
        { 
            cout<<" "<<temp3->roll;
            temp3=temp3->next;
        } 
        cout<<" "<<temp3->roll;
}


void info :: onlyvanila()
{
        cout<<"\nstudents who like only vanila: \n";
        temp1=head1;
        while(temp1!=NULL)
        {  
            temp2=head2;
            f=0;
            while(temp2!=NULL)
            {   
               if(temp1->roll==temp2->roll)
               {  
                   f=1;              
               }
               temp2=temp2->next;
            } 
         
            if(f==0)
            { 
               cout<<" "<<temp1->roll;   
            }
            temp1=temp1->next;
        }
       
}

void info :: onlybutters()
{
        cout<<"\nstudents who like only butterscotch :\n";
        temp2=head2;
        while(temp2!=NULL)
        {  
            temp1=head1;
            f=0;
            while(temp1!=NULL)
            {   
                if(temp2->roll==temp1->roll)
                {  
                    f=1;              
                }
                temp1=temp1->next;
            } 
         
            if(f==0)
            { 
                cout<<"  "<<temp2->roll;   
            }
            temp2=temp2->next;
        }
       
            
}

void info :: vanandbutter()
{
        cout<<"\nstudents who like both vanila and butterscotch :\n";
        temp1=head1;
        while(temp1!=NULL)
        { 
            temp2=head2;
            while(temp2!=NULL)
            {  
                if(temp1->roll==temp2->roll)
                {    
                    cout<<" "<<temp1->roll;   
                }
                temp2=temp2->next;
            }
            
            temp1=temp1->next;
        }
        
}

void info :: Notice()
{

            cout<<"\nstudents who like neither vanila nor butterscotch :\n";
            temp=h1;
            while(temp!=NULL)
            {  
                temp3=head3;
                f=0;
                while(temp3!=NULL)
                {     
                    if(temp->roll==temp3->roll)
                    {  
                       f=1;              
                    }
                    temp3=temp3->next;
                } 
         
                if(f==0)
                { 
                    cout<<"  "<<temp->roll;    
                }
                temp=temp->next;
            }
      
}
 
int main()
{ 
    info s;
    int i;
    char ch;
        do{
            
            cout<<"\n  1.Enter all students rollno  ";
            cout<<"\n  2.Enter the rollno of student who like vanila";
            cout<<"\n  3.Enter the rollno of student who like butterscotch";
            cout<<"\n  4.display the rollno of student who like vanila or butterscotch";
            cout<<"\n  5.display the rollno of student who like only vanila";
            cout<<"\n  6.display the rollno of student who like only butterscotch";
            cout<<"\n  7.display the rollno of student who like both vanila and butterscotch ";
            cout<<"\n  8.display the rollno of student who neither like vanila nor butterscotch : ";
            cout<<"\n Enter choice : ";
  
            cin>>i;
            switch(i)
            {       
                case 1:   
                s.allstud();
                break;
         
                case 2:   
                s.vanila(); 
                break;
                case 3: 
                s.butters();
                break;
                  
                case 4:   
                s.vanorbutter();
                break;

                case 5:   
                s.onlyvanila();
                break;

                case 6:   
                s. onlybutters();
                break;

                case 7:   
                s.vanandbutter(); 
                break;

                case 8:   
                s.Notice();
                break;      
                
                default:  cout<<"\n unknown choice";
            }
            cout<<"\n do you want to continue enter y/Y \n";
            cin>>ch;
       
        }while(ch=='y'||ch=='Y');   

return 0;
}