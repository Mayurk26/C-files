#include<iostream>
using namespace std;

class binary
{
    string s;
    public:
    void read(void);
    void chkbin(void);
    void onescomp(void);
    void display(void);

};

void binary::read(void)
{
    cout<<"enter the binary no : "<<endl;
    cin>>s;
}
void binary:: chkbin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary:: onescomp(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    
}
void binary :: display(void)
{
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }

}

int main()
{
    binary b;
    b.read();
    b.chkbin();
    cout<<"the ones complement is"<<endl;
    b.onescomp();
    b.display();

}