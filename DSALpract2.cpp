#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>

using namespace std;

struct node
{
    char key[20];
    char mean[20];
    node *left;
    node *right;

};

class Dict 
{
    public:
    node *root;
    void create();
    void insert(node *,node *);
    void display(node *);
    int search(node *,char []);
    int update(node *,char []);
    node *del(node * ,char []);
    node *min(node *);

}ob;

void Dict :: create()
{
    int ch;
    node *temp;
    do{
        temp=new node;
        cout<<"\nEnter the keyword : ";
        cin>>temp->key;
        cout<<"\nEnter the meaning : ";
        cin>>temp->mean;
        temp->left=NULL;
        temp->right=NULL;
        if(root==NULL)
        {
           root=temp;
        }
        else{
            insert(root,temp);
        }
        cout<<"\nDo you want add more nodes ? press 1,else press 0";
        cin>>ch;
    }while(ch==1);
    
}

void Dict :: insert(node *root,node *temp)
{
    if(strcmp(temp->key,root->key)<0)
    {
        if(root->left==NULL)
        {
            root->left=temp;
        }
        else{
            insert(root->left,temp);
        }
    }
    else{
        if(root->right==NULL)
        {
            root->right=temp;
        }
        else{
            insert(root->right,temp);
        }
    }
}

int Dict :: search(node *root,char k[])
{
    int c=0;
    while(root!=NULL)
    {
        c++;
        if(strcmp(k, root->key)==0)
        {
            cout<<"\nNo of camparisons are : "<<c;
            return 1;
        }
        if(strcmp(k , root->key)<0)
            root=root->left;
        if(strcmp(k , root->key)>0)
            root=root->right;
    }
    return -1;
    
}

int Dict :: update(node *root,char k[])
{
    while(root!=NULL)
    {
        if(strcmp(k, root->key)==0)
        {
            cout<<"\nEnter the new meaning : ";
            cin>>root->mean;
            return 1;
        }
        if(strcmp(k , root->key)<0)
            root=root->left;
        if(strcmp(k, root->key)>0)
            root=root->right;
    }
    return -1;
}

node *Dict ::del(node *root ,char k[])
{
    node *temp;
    if(root==NULL)
    {
        cout<<"\nNo Dictionary is prsent";
        return root;
    }
    if(strcmp(k ,root->key)<0)
    {
        root->left=del(root->left ,k);
        return root;
    }
    if(strcmp(k ,root->key)>0)
    {
        root->right=del(root->right ,k);
        return root;
    }
    if(root->right==NULL && root->left==NULL)
    {
        temp = root;
        delete temp;
        return NULL;
    }
    if(root->right==NULL)
    {
        temp=root;
        root=root->left;
        delete temp;
        return root;
    }
    else if(root->left==NULL)
    {
        temp=root;
        root=root->right;
        delete temp;
        return root;
    }
    temp = min(root->right);
    strcpy(root->key,temp->key);
    root->right=del(root->right,temp->key);
    return root;

}

node *Dict :: min(node *root)
{
    
}

void Dict :: display(node *root)
{
    if(root!=NULL)
    {
        display(root->left);
        cout<<"\nKeyword is : "<<root->key;
        cout<<"\nMeaning is : "<<root->mean;
        display(root->right);
    }
}

int main()
{
    ob.root=NULL;
    int choice;
    char keyword[20];
    do{
        cout<<"\n\npress 1.to create BST";
        cout<<"\npress 2.to display";
        cout<<"\npress 3.to search the keyword";
        cout<<"\npress 4.to update the keyword";
        cout<<"\npress 5.to delete the keyword";
        cin>>choice;
        switch(choice)
        {
            case 1:
            ob.create();
            break;

            case 2:
            if(ob.root==NULL)
                cout<<"\nDictionary is not present";
            else{
                ob.display(ob.root);
                
            }
            break;

            case 3:
            if(ob.root==NULL)
                cout<<"\nNo Dictionary is present";
            else{
                cout<<"\nEnter the key which you want to search : ";
                cin>>keyword;
                if(ob.search(ob.root,keyword)==1)
                    cout<<"\nkeyword is present";
                else
                    cout<<"\nkeyword is not present";
            }
            break;

            case 4:
            if(ob.root==NULL)
                cout<<"\nNo Dictionary is present";
            else{
                cout<<"\nEnter the key which you want to update : ";
                cin>>keyword;
                if(ob.update(ob.root,keyword)==1)
                    cout<<"\nkeyword is updated";
                else
                    cout<<"\nkeyword is not updated";
            }
            break;

            case 5:
            if(ob.root==NULL)
                cout<<"\nNo Dictionary is present";
            else{
                cout<<"\nEnter the key which you want to delete : ";
                cin>>keyword;
                ob.root=ob.del(ob.root ,keyword);
            }
            break;
        }
    }while(choice<=5);
    return 0;
}