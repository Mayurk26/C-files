#include<iostream>
using namespace std;
#define MAX 8

class dequeue
{
    private:
     int Q[MAX];
     int rear,front,element,i;
    public:
    dequeue()
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

int dequeue :: IsFull()
{
    if(rear==MAX-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int dequeue :: IsEmpty()
{
    if(front>rear)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int dequeue :: insert_r()
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

int dequeue :: insert_f()
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

void dequeue :: del_f()
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

void dequeue :: del_r()
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

void dequeue :: display()
{
    cout<<"\nElements in the queue is :";
    for(int i=front; i<=rear ;i++)
    {
        cout<<Q[i];
    }
}

int main()
{
    dequeue obj;
    int ch;
    char choice;
    do{
        cout<<"\nselect the operation that you want to perform ";
        cout<<"\npress 1.Add the element from front end ";
        cout<<"\npress 2.Add the element from rear end ";
        cout<<"\npress 3.Delete the element from front end ";
        cout<<"\npress 4.Delete the element from rear end ";
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