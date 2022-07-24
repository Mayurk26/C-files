#include<iostream>
#include<stack>
using namespace std;

bool isoperand(char c)
{
    if((c>='a' && c<='z') ||(c>='A'&& c<='Z'))
    {
        return true;
    }
    else{
        return false;
    }
}

string prefixtoinfix(string prefix)
{
    stack <string> s;
    for(int i=prefix.length()-1;i>=0;i--)
    {
        if(isoperand(prefix[i]))
        {
            string op(1,prefix[i]);
            s.push(op);
        }
        else{
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            s.push("( "+op1+ prefix[i] +op2+" )");
        }
    }
    return s.top();
}
int main()
{
    string infix,prefix;
    cout<<"Enter the prefix expression : ";
    cin>>prefix;
    cout<<"\nprefix  expression : "<<prefix;
    infix =prefixtoinfix(prefix);
    cout<<"\ninfix expression is : "<<infix;
    return 0;
}