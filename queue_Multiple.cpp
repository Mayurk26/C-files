//Multiple queue using single dimensional array

// A C++ program to demonstrate implementation of k queues in a single
// array in time and space efficient way
#include<iostream>
#include<climits>
using namespace std;
/* 
// A C++ class to represent k queues in a single array of size n
class kQueues
{  
    // Array of size n to store actual content to be stored in queue
    int *arr;
 
    // Array of size k to store indexes of front elements of the queue 
    int *front;  
 
    // Array of size k to store indexes of rear elements of queue
    int *rear;
 
    // Array of size n to store next entry in all queues           
    int *next; 
    int n, k;
 
    int free; // To store the beginning index of the free list
 
public:
    //constructor to create k queue in an array of size n
    kQueues(int k, int n);
 
    // A utility function to check if there is space available
    bool isFull()   {  return (free == -1);  }
 
    // To enqueue an item in queue number 'qn' where qn is from 0 to k-1
    void enqueue(int item, int qn);
 
    // To dequeue an from queue number 'qn' where qn is from 0 to k-1
    int dequeue(int qn);
 
    // To check whether queue number 'qn' is empty or not
    bool isEmpty(int qn)  {  return (front[qn] == -1); }
};
 
// Constructor to create k queues in an array of size n
kQueues::kQueues(int k1, int n1)
{
    // Initialize n and k, and allocate memory for all arrays
    k = k1, n = n1;
    arr = new int[n];
    front = new int[k];
    rear = new int[k];
    next = new int[n];
 
    // Initialize all queues as empty
    for (int i = 0; i < k; i++)
        front[i] = -1;
 
    // Initialize all spaces as free
    free = 0;
    for (int i=0; i<n-1; i++)
        next[i] = i+1;
    next[n-1] = -1;  // -1 is used to indicate end of free list
}
 
// To enqueue an item in queue number 'qn' where qn is from 0 to k-1
void kQueues::enqueue(int item, int qn)
{
    // Overflow check
    if (isFull())
    {
        cout << "\nQueue Overflow\n";
        return;
    }
 
    int i = free;      // Store index of first free slot
 
    // Update index of free slot to index of next slot in free list
    free = next[i];
 
    if (isEmpty(qn))
        front[qn] = i;
    else
        next[rear[qn]] = i;
 
    next[i] = -1;
 
    // Update next of rear and then rear for queue number 'qn'
    rear[qn] = i;
 
    // Put the item in array
    arr[i] = item;
}
 
// To dequeue an from queue number 'qn' where qn is from 0 to k-1
int kQueues::dequeue(int qn)
{
    // Underflow checkSAS
    if (isEmpty(qn))
    {
         cout << "\nQueue Underflow\n";
         return INT_MAX;
    }
 
    // Find index of front item in queue number 'qn'
    int i = front[qn];
 
    front[qn] = next[i];  // Change top to store next of previous top
 
    // Attach the previous front to the beginning of free list
    next[i] = free;
    free = i;
 
    // Return the previous front item
    return arr[i];
}
 
// Driver program to test kStacks class 
int main()
{
    // Let us create 3 queue in an array of size 10
    int k = 3, n = 10;
    kQueues ks(k, n);
 
    // Let us put some items in queue number 2
    ks.enqueue(15, 2);
    ks.enqueue(45, 2);
 
    // Let us put some items in queue number 1
    ks.enqueue(17, 1);
    ks.enqueue(49, 1);
    ks.enqueue(39, 1);
 
    // Let us put some items in queue number 0
    ks.enqueue(11, 0);
    ks.enqueue(9, 0);
    ks.enqueue(7, 0);
 
    cout << "Dequeued element from queue 2 is " << ks.dequeue(2) << endl;
    cout << "Dequeued element from queue 1 is " << ks.dequeue(1) << endl;
    cout << "Dequeued element from queue 0 is " << ks.dequeue(0) << endl;
 
    return 0;
}*/

#define size 20
int que[size];
int front[size];
int rear[size];
int sz[size];

void set_que(int index)
{
    int sum,i;
    if(index==1)
    {
        front[index]=0;
        rear[index]=front[index]-1;
    }
    else{
        sum=0;
        for(int i=0;i<index-1;i++)
        {
            sum=sum+sz[i];
        }
        front[index]=sum;
        rear[index]=front[index]-1;
    }
}

int Qfull(int index)
{
    int sum,i;
    sum=0;
    for(i=0;i<index;i++)
    {
        sum=sum+sz[i];
    }
    if(rear[index]==sum-1)
        return 1;
    else
        return 0;
}

void insert(int item,int index)
{
    int j;
    j=rear[index];
    que[++j]=item;
    rear[index]=rear[index]+1;
}

int Qempty(int index)
{
    if(front[index]>rear[index])
        return 1;
    else;
        return 0;
}

int del(int index)
{
    int item;
    item=que[front[index]];
    que[front[index]]=-1;
    front[index]++;
    return item;

}

void display(int num)
{
    int index,i;
    index=1;
    do{
        if(Qempty(index))
        {
            cout<<"\nqueue no "<<index<<" isempty ";
        }
        else{
            cout<<"\nqueue no "<<index<<" is ";
            for(i=front[index];i<=rear[index];i++)
            {
                if(que[i]!=-1)
                    cout<<" "<<que[i];
            }
        }
        index++;
    }while(index<=num);
}

int main()
{
    int num,choice,item,i,index;
    char ans;
    cout<<"\nHow many queue do you want :";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>sz[i];
    }
    for(index=1;index<=num;index++)
        set_que(index);
    do{
        cout<<"\n 1.insert 2.Delete 3. display";
        cout<<"\nenter choice";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nenter queue no in which you want to insert";
            cin>>index;
            if(Qfull(index))
               cout<<"ncannot insert"; 
            else{
                   cout<<"enter no";
                   cin>>item;
                   insert(item,index);
             }
             break;
             case 2:
             cout<<"\nfrom which queue you want to delete";
             cin>>index;
             if(Qempty(index))
                cout<<"\nqueue underflow";
            else{
                item=del(index);
                cout<<"\ndeleted item is :"<<item;
            }
            break;

            case 3:
            display(num);
            break;

            default:
            cout<<"wrong choice";
            break;

        }
        cout<<"\ncontonue";
        cin>>ans;
    }while(ans=='Y'||ans=='y');
    return 0;
}


