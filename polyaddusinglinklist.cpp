#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

#define TRUE 1
#define FALSE 0

class polyadd
{
    private:
    typedef struct node
    {
        float coef;
        int exp;
        node *next;
    }p;
    p *head;
    public:
    polyadd();
    void getpoly();
    void add(polyadd ,polyadd);
    void display();
    p *attach(int ,float,p*);
    
    ~polyadd();

};

polyadd :: polyadd()
{
    head =NULL;
}

void polyadd :: getpoly()
{
    p *New ,*last;
    int exp,flag;
    float coef;
    char ans='y';
    flag= TRUE;
    cout<<"\nEnter the polynomial in descending order of exponent ";
    do{
        cout<<"\nEnter the coefficient and exponent of a term :";
        cin>>coef>>exp;
        New= new p;
        New ->next=NULL;
        if(New ==NULL)
        {
            cout<<"\nMemory cabnot be alocated";
            New ->coef =coef;
            New ->exp =exp;
        }
        if(flag==TRUE)
        {
            head=New;
            last =head;
            flag=FALSE;
        }
        else{
            last->next=New;
            last=New;
        }
        cout<<"\nDo you want to continue ?";
        cin>>ans;
    }
    while(ans=='y');
    return ;
}

void polyadd:: display()
{
    p *temp;
    temp =head;
    if(temp==NULL)
    {
        cout<<"The polynomial is empty ";
        return;
    }
    cout<<endl;
    while(temp->next!=NULL)
    {
        cout<<temp->coef<<"x^"<<temp->exp<<"+";
        temp=temp->next;
    }
    cout<<temp->coef<<"x^"<<temp->exp<<"+";

}

void polyadd :: add(polyadd p1,polyadd p2)
{
    p *temp1,*temp2,*dummy;
    float coef;
    temp1=p1.head;
    temp2=p2.head;
    head = new p;
    if(head==NULL)
    {
        cout<<"\nMemory cannot be allocated";
        dummy=head;
    }
    while(temp1!=NULL && temp2!= NULL)
    {
        if(temp1->exp ==temp2->exp)
        {
            coef= temp1->coef + temp2->coef;
            head = attach(temp1->exp,coef,head);
            temp1=temp1->next;
            temp2=temp2->next;

        }
        else if(temp1->exp<temp2->exp)
        {
            coef=temp2->coef;
            head=attach(temp2->exp,coef,head);
            temp2=temp2->next;
        }
        else if(temp1->exp>temp2->exp)
        {
            coef=temp1->coef;
            head=attach(temp1->exp,coef,head);
            temp1=temp1->next;
        }

    }
    while(temp1!=NULL)
    {
        head = attach(temp1->exp,temp1->coef,head);
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        head = attach(temp2->exp,temp2->coef,head);
        temp2=temp2->next;
    }
    head->next=NULL;
    head=dummy->next;
    delete dummy;
    return;

}

p *polyadd :: attach(int exp,float coef, p* temp)
{
    p *New,*dummy;
    New =new p;
    if(New==NULL)
    cout<<"\nMemory cannot be be allocated";
    New->exp=exp;
    New->coef=coef;
    New->next=NULL;
    dummy=temp;
    dummy->next=New;
    dummy=New;
    return(dummy);

}

polyadd ::~polyadd()
{
    p *temp;
    temp=head;
    while(head!=NULL)
    {
        temp=temp->next;
        delete head;
        head=temp;
    }
}

int main()
{
    polyadd p1,p2,p3;
    cout<<"\nENter the first polynomial : ";
    p1.getpoly();
    cout<<"\nEnter the second polynomial : ";
    p2.getpoly();
    cout<<"\nfirst polynomial is : ";
    p1.display();
    cout<<"\nsecond polynomial is : ";
    p2.display();
    p3.add(p1,p2);
    cout<<"\nAddition of two polynomials is : ";
    p3.display();

    return 0;

}
