#include<iostream>
using namespace std;

struct node
{
    char data;
    node *next;
    void push(char);
    char pop();
}*top=NULL,*ptr,*p,*temp;

void node :: push(char ch)
{
    ptr = new node;
    ptr->data=ch;
    ptr->next=NULL;
    if(top==NULL)
    {
        top =ptr;
    }
    else
    {
        p=top;
        top=ptr;
        top->next=p;
    }
}

char node :: pop()
{
    if(top==NULL)
    {
        cout<<"\nstack is empty";
        return '\0';
    }
    else
    {
        temp=top;
        top=top->next;
        return(temp->data);
        delete(temp);
    }
}

int main()
{
    node ob;
    char exp[20];
    int inv=0;
    cout<<"Enter the expression : ";
    cin>>exp;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='{')
           ob.push(exp[i]);
        else if(exp[i]=='[')
           ob.push(exp[i]);
        else if(exp[i]=='(')
           ob.push(exp[i]);
        else if(exp[i]=='}')
        {
            if(ob.pop()!='{')
              inv = 1;
        }
        else if(exp[i]==']')
        {
            if(ob.pop()!='[')
              inv=1;
        }
        else if(exp[i]==')')
        {
            if(ob.pop()!='(')
              inv = 1;
        }
        if(inv==1)
            cout<<"\nInvalid statement";
    }
    if(top==NULL)
    {
        cout<<"\nBalanced parenthesized expression";
    }
    else{
        cout<<"\nNot Balanced parenthesized expression";
    }
}