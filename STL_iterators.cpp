#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*
int main()
{
    vector <int> v= {1,2,3,4,6};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // vector <int > :: iterator it;
    // it=v.begin();
    // for(it= v.begin();it!= v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    vector<pair<int ,int> >v1={{1,2},{2,3},{3,4}};
    vector<pair<int ,int>> ::iterator it;
    it = v1.begin();
    for(it=v1.begin();it!=v1.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
        //can also write as
        //cout<<it->first<<" "<<it->second<<endl;
    }

}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//for avoiding to write large loop statements
//we can use range base loops
/*
int main()
{
    vector <int > v={1,2,3,4,5};
     
    for(int value : v)
    {
        cout<<value<<" ";
    }

    //to change the value also can pass the reference of value
    for(int &value : v)   //for pair->     for(pair<int,int > &value : v){}
    {
        cout<<value<<" ";
        //for pairs write as cout<<value.first<<" "<<value.second<<end;
    }

    //can also use for vector of pairs
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//auto keyword
//by using the auto keyword the vector declaration can be avoided

int main()
{
    vector <int> v ={1,2,3,4};
    for(auto it=v.begin();it!=v.end();it++)   //using this the iterator declaration statement can be avoided
    {
        cout<<*it<<" ";

    }

    for(auto &value : v)
    {
        cout<<value<<" ";
    }

    //similarly can use in casse of pair


}

