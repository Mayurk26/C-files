#include<iostream>
using namespace std;

#define N 5
int stack[N];
int top=-1;

void push()
{
    int x;
    cout<<"Enter element : ";
    cin>> x;
    if(top== N-1)
    {
        cout<<"\nstack is overflow";
    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int y;
    if(top== -1)
    {
        cout<<"\n stack is underflow";
    }
    else{
        y=stack[top];
        top--;
        cout<<"\nthe remove item is : "<<y;
    }
}

void peep()
{
    int z;
    if(top==-1)
    {
        cout<<"\nstack is underflow";
    }
    else{
        z=stack[top];
        cout<<z;
    }
}

void display()
{
    int i;
    for(i=top ;i>=0 ; i--)
    {
        cout<<stack[i]<<" ";
    }
}

int main()
{
    int choice;
    do{
        
        cout<<"\n1. push   ,  2. pop   ,3. peep  ,4. display "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            peep();
            break;

            case 4:
            display();
            break;
            default:
            cout<<"\ninvalid choice";
        }

    } while(choice != 0);
     //cout<<"\nEnd program";
}