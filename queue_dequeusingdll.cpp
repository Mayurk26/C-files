//deque using circular doubly lnked list
#include<iostream>

using namespace std;
struct ListNode
{
	int data;
	ListNode* prev;
	ListNode* next;
};

ListNode *head;

void pushrear(int data)
{
	ListNode* newNode=new ListNode;
	newNode->data=data;
	if(head==NULL)
	{
		head=newNode;
		head->next=head;
	    head->prev=head;
	}
	else
	{
		newNode->prev=head->prev;
		newNode->next=head;
		head->prev->next=newNode;
		head->prev=newNode;
	}
}

void pushFront(int data)
{
	pushrear(data);
	
  /*  ListNode* newNode=new ListNode;
	newNode->data=data;
	if(head==NULL)
	{
		head=newNode;
		head->next=head;
	    head->prev=head;
	}
    else{
        newNode->next=head;
        newNode->prev=head->next;
        //head->next=newNode;
        //head->prev=newNode;*/
        head=head->prev;
    //}
}

int poprear()
{
	int data;
	if(head==NULL)
	{
		cout<<"Queue is empty"<<endl;
		
	}
	else if(head->prev==head)
	{
		delete(head);
		data=head->data;
		head=NULL;
	}
	else
	{
		ListNode * newTail= head->prev->prev;
		data= head->prev->data;
		newTail->next=head;
		delete(head->prev);
		head->prev=newTail;
	}
	return data;
}

void display()
{
    ListNode *temp;
    temp=head;
    cout<<"\nelements in deque are : ";
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    temp->next=head;
    cout<<endl;
}
int popFront()
{
	int data;
	head=head->next;
	data=poprear();
	return data;
}
int main()
{
	ListNode* head=NULL;
	pushrear(10);
	pushrear(20);
	pushrear(30);
	pushrear(40);
	pushFront(50);
	pushFront(60);
    display();
    cout<<"\ndeleted elements are :";
	cout<<popFront()<<endl;
	cout<<popFront()<<endl;
	cout<<poprear()<<endl;
    display();
}