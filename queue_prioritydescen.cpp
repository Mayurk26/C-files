//descending priority queue using array

#include<iostream>
using namespace std;
#define size 5
 
class pr_que
{
    private:
    int que[size];
    public:
    int rear,front;
    pr_que()
    {
        front=0;
        rear=-1;
    }
    int insert();
    int Qfull();
    int Qempty();
    int del();
    void display();


};

int pr_que:: insert()
{
    int item,j;
    cout<<"\nenter element : ";
    cin>>item;
    if(front==-1)
        front++;
    j=rear;
    while(j>=0 && item>=que[j])
    {
        que[j+1]=que[j];
        j--;
    }
    que[j+1]=item;
    rear=rear+1;
    return rear;
}

int pr_que:: Qfull()
{
    if(rear==size-1)
       return 1;
    else
       return 0;
}

int pr_que :: del()
{
    int item;
    item=que[front];
    cout<<"\ndeleted element is : "<<item;
    front++;
    return front;
}

int pr_que:: Qempty()
{
    if((front==-1) || (front>rear))
        return 1;
    else
        return 0;
}

void pr_que :: display()
{
    int i;
    cout<<"\nthe queue is :";
    for(i=front;i<=rear;i++)
    {
        cout<<" "<<que[i];
    }
}

int main()
{
    int choice;
    char ans;
    pr_que ob;
    do{
        cout<<"\n1.insert 2.delete 3.display";
        cout<<"\nenter choice";
        cin>>choice;
        switch(choice)
        {
            case 1:
            if(ob.Qfull())
            {
                cout<<"\nqueue is full";
            }
            else{
                ob.rear=ob.insert();
            }
            break;
            case 2:
            if(ob.Qempty())
            {
                cout<<"\nqueue is empty";
            }
            else{
                ob.front=ob.del();
            }
            break;
            case 3:
            if(ob.Qempty())
            {
                cout<<"\nqueue is empty";
            }
            else{
                ob.display();
            }
            break;
            default:
            cout<<"\nwrong choice";
            break;
        }
        cout<<"\nDo you want to ciontinue?";
        cin>>ans;
    }
    while(ans=='Y'||ans=='y');
    return 0;
}