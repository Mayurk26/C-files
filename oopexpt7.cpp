#include<iostream>
#include<algorithm>
using namespace std;

class person
{
    public:
    string name;
    string DOB;
    long teleno;

    void getdata()
    {
        cout<<"\nEnter the name: ";
        cin>>name;
        cout<<"Enter the date of birth: ";
        cin>>DOB;
        cout<<"Enter the telephone number: ";
        cin>>teleno;
    }
    void setdata()
    {
        cout<<"\n Name : "<<name;
        cout<<"\n Date_of_Birth : "<<DOB;
        cout<<"\n Telephone_no : "<<teleno;
        cout<<endl;
    }
};

bool compare(const person &a,const person &b)
{
    return a.name < b.name;
}

int main()
{
    int n ,c;
    cout<<"\nEnter the total no of records :";
    cin>>n;
    string z[n];
    person p[n];
    for(int i=0;i<n;i++)
    {
        p[i].getdata();
    }

    cout<<"//**Sorted record **//"<<endl;
    sort(p,p+n,compare);
    for(int i=0;i<n;i++)
    {
        p[i].setdata();
    }
    cout<<endl;

    string m;
    cout<<"Enter the name to be search: ";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        z[i]=p[i].name;
    }

    if(binary_search(z,z+n ,m))
    {
        cout<<"\n//**RECORD FOUND**//"<<endl;
    }
    else
        cout<<"\n//**RECORD NOT FOUND**//";
}