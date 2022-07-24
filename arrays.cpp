#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    string cars[7]={"city","altroz","innova","thar","bugati"};
    cars[2]="audi";
    cars[6]="bullet";
    cars[5]="ducati";
    cout<<cars[1];
    cout<<cars[2];
    cout<<cars[5];
    cout<<cars[6];

    for(int i=0;i<5;i++)
    {
        cout<<cars[2]<<endl;
    }
}*/

/*
int main()
{
    string food="rolls";
    string &meal=food;
    cout<<food<<endl;
    cout<<meal<<endl;
    cout<<&food;      //it outputs the memory address
    return 0;
}*/

//using for loop

int main()
{
    vector<char> v1;
    vector<char >v2;

    for(int i=0;i<v1.size();i++)
    {
        char m;
        cin>>m;
        v1.push_back(m);
    }
    for(int i=0;i<v2.size();i++)
    {
        char n;
        cin>>n;
        v1.push_back(n);
    }
}