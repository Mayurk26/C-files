#include<iostream>
using namespace std;

class Node
{
    public:
    int key;
    int data;
    Node* next;
    Node()
    {
        key=0;
        data=0;
        next=NULL;
    }

    Node(int k,int d)
    {
        key=k;
        data=d;
    
    }

};

class Singlylinkedlist
{
    public:
    Node *head;
    Singlylinkedlist()
    {
        head =NULL;
    }
    Singlylinkedlist(Node *n)
    {
        head= n;
    }

    //1. checking if node exist or not
    Node *nodeexists(int k)
    {
        Node *temp=NULL;
        Node *ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->key==k)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }

    //2.Append a node ina list
    void appendNode(Node *n)
    {
        if(nodeexists(n->key)!=NULL)
        {
            cout<<"Node already exists"<<n->key<<endl;
        }
        else{
            if(head==NULL)
            {
                head=n;
                cout<<"node appended";
            }
            else{
                Node *ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"node appended";
            }
        }
    }

    //3. prepend a node -attach a node at a beginning of list
    void prependnode(Node *n)
    {
         if(nodeexists(n->key)!=NULL)
        {
           cout<<"node alreadyt exists"<<n->key<<endl;
        }
        else{
            n->next=head;
            head=n;
            cout<<"node prepended";
        }
    }

    //4 . insert node after the particular node
    void insertnodeafter(int k,Node *n)
    {
        Node* ptr=nodeexists(k);
        if(ptr==NULL)
        {
            cout<<"no node exists with this key value"<<k<<endl;
        }
        else{
            if(nodeexists(n->key)!=NULL)
           {
           cout<<"node alreadyt exists"<<n->key<<endl;
           }
           else{
               n->next=ptr->next;
               ptr->next=n;
               cout<<"node inserted";
           }
            
        }
    }
    // 5. delete node
    void Deletenode(int k)
    {
        if(head==NULL)
        {
            cout<<"already empty can't delete";
        }
        else if(head!=NULL){
            if(head->key==k)
            {
                head=head->next;
                cout<<"Node is unlinked from list"<<k<<endl;
            }
            else{
                Node *temp=NULL;
                Node *prevptr=head;
                Node *currentptr=head->next;
                while(currentptr!=NULL)
                {
                    if(currentptr->key==k)
                    {
                        temp=currentptr;
                        currentptr=NULL;
                    }
                    else{
                        prevptr=prevptr->next;
                        currentptr=currentptr->next;
                        
                    }
                }
                if(temp!=NULL)
                {
                    prevptr->next=currentptr->next;
                    cout<<"Node is unlinked"<<k;
                }
                else{
                    cout<<"Node doesn't exist with key value";
                }
                
            }
            
        }
    }
    //6. update node by key
    void updatebykey(int k,int d)
    {
        Node *ptr=nodeexists(k);
        if(ptr!=NULL)
        {
            ptr->data=d;
            cout<<"Node is updated successfully"<<endl;
        }
        else{
            cout<<"Node doesn't existed"<<k<<endl;
        }
    }

    //7.printing
    void printlist()
    {
        if(head==NULL)
        {
            cout<<"singly linkedlist is empty"<<endl;
        }
        else{
            cout<<endl<<"singly linked list values";
            Node *temp=head;
            while(temp!=NULL)
            {
                cout<<"("<<temp->key<<","<<temp->data<<")"<<endl;
                temp=temp->next;
            }
        }
    }




};

int main()
{
    Singlylinkedlist s;
    int option;
    int key1;int k1;int data1;
    do{
        cout<<"which operation do you want to perform ?.Enetre 0 to exit"<<endl;
    cout<<"1.appendNode()"<<endl;
    cout<<"2.prependnode()"<<endl;
    cout<<"3.insertnodeafter()"<<endl;
    cout<<"4.Deletenode()"<<endl;
    cout<<"5.updatebykey()"<<endl;
    cout<<"6.printlist()"<<endl;
    cout<<"7.cleardevice()";
    cin>>option;
    Node *n1=new Node();
     switch(option)
     {
        case 0:
        break;
        case 1:
        cout<<"\n Enter the key and data to be appended"<<endl;
        cin>>key1;
        cin>>data1;
        n1->key=key1;
        n1->data=data1;
        s.appendNode(n1);
        break;
        case 2:
        cout<<"\n Enter the key and data of the node to be prepended"<<endl;
        cin>>key1;
        cin>>data1;
        n1->key=key1;
        n1->data=data1;
        s.prependnode(n1);
        break;
        case 3:
        cout<<"enter the key of teb node after which you want to insert the node"<<endl;
        cin>>k1;
        cout<<"\n Enter the key and data to be appended"<<endl;
        cin>>key1;
        cin>>data1;
        n1->key=key1;
        n1->data=data1;
        s.insertnodeafter(k1,n1);
        case 4:
        cout<<"enter the node of key to be delete"<<endl;
        cin>>k1;
        s.Deletenode(k1);
        case 5:
        cout<<"update opreration:- enter the key and data of node to be updated"<<endl;
        cin>>key1;
        cin>>data1;
        s.updatebykey(key1,data1);
        case 6:
        s.printlist();
        break;
        case 7:
         system("cls");
         break;
        default:
        cout<<"enter proper option no:"<<endl;

     }

    }while(option!=0);

    

    return 0;
}