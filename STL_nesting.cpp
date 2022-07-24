#include<bits/stdc++.h>
using namespace std;

//nesting of map and set
/*
int main()
{
    map<set<int> ,int > m;
    set<int> s1={1,2,3};
    set<int > s2={2,3};
    //we can compare it
    cout<<(s1<s2);
}
*/
/*
int main()
{
    map <pair<string ,string> ,vector<int>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    } 
    for(auto pr : m)
    {
        auto &fullname = pr.first;
        auto &list=pr.second;
        cout<<fullname.first<<" "<<fullname.second<<endl;
        cout<<list.size();
        for(auto &element : list)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
}
*/

int main()
{
    map <int ,set<string>> marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int marks;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
    auto curr_it= --marks_map.end();
    while(true)
    {
        auto &students = (*curr_it).second;
        auto &marks = (*curr_it).first;
        for(auto &student : students)
        {
            cout<<student<<" "<<marks<<endl;
        }
        if(curr_it==marks_map.begin())
        {
            break;
        }
        curr_it--;

    }
}