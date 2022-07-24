#include<iostream>
using namespace std;
#define MAX 8

class job
{
    private:
     int Q[MAX];
     int rear,front,element,i;
    public:
    job()
    {
        rear=-1;
        front=0;
    }
    int IsFull();
    int IsEmpty();
    int insert_f();
    int insert_r();
    void del_f();
    void del_r();
    void display();
};

int job :: IsFull()
{
    if(rear==MAX-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int job :: IsEmpty()
{
    if(front>rear)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int job :: insert_r()
{
    if(IsFull())
    {
        cout<<"\nqueue is Full";
    }
    else{
        cout<<"\nEnter the element from rear end :";
        cin>>element;
        rear++;
        Q[rear]=element;
    }
    return rear;
}

int job :: insert_f()
{
    if(IsFull())
    {
        cout<<"\nqueue is Full";
    }
    else{
        cout<<"\nEnter the element from front end :";
        cin>>element;
        i=rear;
        while(i>=front)
        {
            Q[i+1]=Q[i];
            i--;
        }
        Q[front]=element;
        rear++;
    }
    return front;
}

void job :: del_f()
{
    if(IsEmpty())
    {
        cout<<"\nqueue is empty";
    }
    else{
        cout<<"\nthe deleted element is :";
        cout<<Q[front];
        front++;
    }
}

void job :: del_r()
{
    if(IsEmpty())
    {
        cout<<"\nqueue is empty";
    }
    else{
        cout<<"\nthe deleted element is :";
        cout<<Q[rear];
        rear--;
    }
}

void job :: display()
{
    cout<<"\nJobs in the queue is :";
    for(int i=front; i<=rear ;i++)
    {
        cout<<Q[i];
    }
}

int main()
{
    job obj;
    int ch;
    char choice;
    do{
        cout<<"\nselect the operation that you want to perform ";
        cout<<"\npress 1.Add the job from front end ";
        cout<<"\npress 2.Add the job from rear end ";
        cout<<"\npress 3.Delete the job from front end ";
        cout<<"\npress 4.Delete the job from rear end ";
        cout<<"\npress 5.Display";
        cout<<"\nEnter choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
            obj.insert_f();
            break;
            case 2:
            obj.insert_r();
            break;
            case 3:
            obj.del_f();
            break;
            case 4:
            obj.del_r();
            break;
            case 5:
            obj.display();
            break;
            default:
              cout<<"\nInvalid choice";
        }
        cout<<"\nDo you want to continue press Y ?";
        cin>>choice;

    }while(choice=='Y' || choice=='y');
}