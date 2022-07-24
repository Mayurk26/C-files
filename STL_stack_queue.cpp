#include<bits/stdc++.h>
using namespace std;

//stack
/*
int main()
{
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
*/
//////////////////////////////////////////////////////////////////////

//queue
/*
int main()
{
    queue<string> q;
    q.push("abc");
    q.push("cde");
    q.push("efg");
    q.push("asd");
    q.push("fgh");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
*/

//balanced bracketss
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
unordered_map<char,int> symbols={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};

string isbalanced(string s)
{
    stack <char > st;
    for(char bracket:s)
    {
        if(symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else{
            if(st.empty()) return "NO";
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket] !=0)
            {
                return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    else return "NO";


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<isbalanced(s)<<endl;
    }
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//next greater element

vector<int > NGE(vector<int > v)
{
    vector<int> nge(v.size());
    stack<int> st;
    for(int i=0;i<v.size();i++)
    {
        while(!st.empty() && v[i]>v[st.top()])
        {
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        nge[st.top()]= -1 ;
        st.pop();
    }
    return nge;
    
}

int main()
{
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector <int> nge= NGE(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "<<(nge[i] == -1 ? -1 : v[nge[i]])<<endl;
    }
}