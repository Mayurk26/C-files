#include<iostream>
using namespace std;
#define Max 20

class multistack
{
    private:
    int stack[Max];
    int lb,ub;
    public:
    int size[Max];

    multistack()
    {
        for(int i=1;i<=Max;i++)
        {
            stack[i]=-1;
        }
    }

    void setstack(int index)
    {
        int sum,i;
        if(index==1)
        {
            lb=1;
            ub=size[index];
        }
        else{
            sum=0;
            for(int i=0;i<index;i++)
                sum=sum+size[i];
            lb=sum+1;
            ub=sum+ size[index];
        }

    }

    int stfull(int index)
    {
        int top,i,sum;
        setstack(index);
        for(top=lb;top<=ub;top++)
        {
            if(stack[top]==-1)
                break;
        }
        if(top-1==ub)
           return 1;
        else 
           return 0;
    }

    int stempty(int index)
    {
        int top;
        setstack(index);
        for(top=lb;top<=ub;top++)
        {
            if(stack[top]!=-1)
                return 0;
            return 1;
        }
    }

    void push(int item)
    {
        int top;
        for(top=lb;top<=ub;top++)
        
            if(stack[top]==-1)
               break;
        
        stack[top]=item;
        return ;
    }

    int pop()
    {
        int top,item;
        for(top=lb;top<=ub;top++)
        {
            if(stack[top]==-1)
               break;
        }
        top--;
        item=stack[top];
        stack[top]=-1;
        return item;
    }

    void display(int index)
    {
        int top;
        setstack(index);
        for(top=lb;top<=ub;top++)
        {
            if(stack[top]!=-1)
               cout<<" "<<stack[top];
        }
    }

    void displayall(int n)
    {
        int top,index;
        for(index=1;index<=n;index++)
        {
            cout<<"\nstack number "<<index<<" is";
            setstack(index);
            for(top=lb;top<=ub;top++)
            {
                if(stack[top]!=-1)
                   cout<<" "<<stack[top];
            }
        }
    }


};

int main()
{
    int n,index,i,item,choice;
    char ans='y';
    multistack m;
    cout<<"\nEnter how many stacks are there :";
    cin>>n;
    cout<<"\nEnter the size for each stack :";
    for(i=0;i<n;i++)
    {
        cout<<"\nsize of stack "<<i<<" is";
        cin>> m.size[i];
    }
    do{
        cout<<"\n1.push 2.pop 3.display 4.displayall ";
        cout<<"\nenter choice ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the item to push ";
            cin>>item;
            cout<<"\nwhich stack ";
            cin>>index;
            if(m.stfull(index))
            
                cout<<"\nstack is full ";
            
            else 
                m.push(item);
            break;    
            

            case 2:
            cout<<"\nwhich stack ";
            cin>>index;
            if(m.stempty(index))
                cout<<"\nstack number "<<i<<" is empty";
            else{
                item=m.pop();
                cout<<"\n"<<item<<" is pop from stack "<<index;
            }
            break;

            case 3:
            cout<<"\nwhich stack has to be display ";
            cin>>index;
            m.display(index);
            break;

            case 4:
            m.displayall(n);
            break;

            default:
            cout<<"\nExiting";    
            
        }
        cout<<"\nDo you want to continue ? ";
        cin>>ans;
    }
    while(ans=='y'|| ans=='Y');
    return 0;
}