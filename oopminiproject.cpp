#include<iostream>
#include<string.h>
using namespace std;

class Email
{
    char id[100];
    char *Email_id;
    int size;
    public:
    Email()
    {
        cout<<"\n\tEnter email id : ";
        cin>>id;
        Email_id=new char[sizeof(id)+1];
        strcpy(Email_id,id);
        size=strlen(Email_id);
        cout<<"\n\n "<<Email_id;
    }
    ~Email()
    {
        delete[] Email_id;

    }

    bool HasspecialSymbols()
    {
        int k=0,temp;
        for(int i=size-1;i>0;i--)
        {
            if(!isalpha(Email_id[i]))
            {
                if(Email_id[i]!='.')
                return 0;
            }
            k++;
            if(Email_id[i]=='.')
            {
                k--;
                if(k>3 || k<2)
                return 0;

                temp=i+1;
                for(i=temp;i>=0;i--)
                {
                    if(Email_id[i]=='@')
                    {
                        if(temp==i)
                        return 0;
                        else
                        return 1;
                    }
                }
            }
        }
        return 0;
    }

    bool Firstchar()
    {
        if(isalpha(Email_id[0]))
           return 1;
        return 0;
    }

    void check_id(void)
    {
        if(Firstchar()&& HasspecialSymbols())
        {}
        else
         throw 0;
    }

};

int main()
{
    Email E;
    try
    {
        E.check_id();
        cout<<"\n\tEntered Emeil id is valid.";
    }
    catch(int)
    {
        cout<<"\n\tEntered Email id is invalid.";
    }

    cout<<endl<<endl;
    return 0;
    
}