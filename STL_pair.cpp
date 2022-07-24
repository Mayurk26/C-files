#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    pair<int ,string> p;
    //two methods to assign value 
    //p=make_pair(2, "mayur");  //1 method
    p={2,"abcd"};             //2 method
    cout<<p.first<<" "<<p.second<<endl;

    pair<int ,string> &p1 =p;          //p1 will take reference of p
    cout<<p1.first<<" "<<p.second<<endl;

  /*  //array 
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair <int ,int > p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    // for(int i=0;i<3;i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }




    //we can also normally take the input as
    cin>>p.first;
    cout<<p.first;

}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// vector
/*
void print_vec(vector <int > &v)
{
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i <v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(5);
}

int main()
{
    vector<int > v;
    //vector <int > v[5];   //empty vector of size 5
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    print_vec(v);

    vector<int > &v1=v;
    //v1.push_back(5);
    print_vec(v1);
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//vector with pair
/*
void print_vec(vector<pair <int,int > > &v)
{
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i <v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
   
}

int main()
{
    //vector<pair<int ,int >>v={{1,2},{2,3},{3,4}};   or assign dynamically as
    vector<pair<int ,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
       // v.push_back({x,y}); or
       v.push_back(make_pair(x,y));
    }
    print_vec(v);

       
}*/

////////////////////////////////////////
//making N vectors
/*
void print_vec(vector<int> &v)
{
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i <v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
   
}

int main()
{
    int N;
    cin>>N;
    vector<int > v[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    {
        print_vec(v[i]);
    }
}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//vector of vector

void print_vec(vector<int> &v)
{
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i <v.size();i++)
    {
        cout <<v[i]<<endl;
    }
    cout<<endl;
   
}

int main()
{
    int N;
    cin>>N;
    vector<vector<int >> v;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        vector<int >temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        print_vec(v[i]);
    }
}





