
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

bool isoperator(char c)
{
    if(c=='+'|| c=='-' || c=='*' ||c=='/' ||c=='^')
    {
        return true;
    }
    else{
        return false;
    }
}

int prescedence(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*' ||c=='/')
    return 2;
    else if(c=='+'||c=='-')
    return 1;
    else
    return -1;
}

string Infixtoprefix(stack <char> s ,string infix)
{
    string prefix;
    reverse(infix.begin(),infix.end());     //this will reverse the infix expression
    for(int i=0;i<=infix.length();i++)
    {
        if(infix[i]=='(')
        {
            infix[i]=')';
        }
        else if(infix[i]==')')
        {
            infix[i]='(';
        }
    }
    for(int i=0;i<infix.length();i++)
	{
		if((infix[i] >= 'a' && infix[i] <= 'z')
		||(infix[i] >= 'A' && infix[i] <= 'Z'))
		{
			prefix+=infix[i];
		}
		else if(infix[i] == '(')
		{
			s.push(infix[i]);
		}
        else if(infix[i]==')')
        {
            while((s.top()!='(') && (!s.empty()))
            {
                char temp=s.top();
                prefix+=temp;
                s.pop();
            }
            if(s.top()='(')
            {
                s.pop();
            }
            
        }
        else if(isoperator(infix[i]))
		{
			if(s.empty())
			{
				s.push(infix[i]);
			}
			else
			{
				if(prescedence(infix[i])>prescedence(s.top()))
				{
					s.push(infix[i]);
				}
                else if(prescedence(infix[i])==prescedence(s.top()) && (infix[i]=='^'))
                {
                    while(prescedence(infix[i])==prescedence(s.top()) && (infix[i]=='^'))
                    {
                        prefix+=s.top();
                        s.pop();
                    }
                    s.push(infix[i]);
                }
                else if(prescedence(infix[i])==prescedence(s.top()))
                {
                    s.push(infix[i]);
                }
                else{                 //this condn is prescedence(infix[i])<=prescedence(s.top())
                    while((!s.empty()) && (prescedence(infix[i])<=prescedence(s.top()))) 
                    {
                        prefix+=s.top();
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    }
    while(!s.empty())
    {
        prefix+=s.top();
        s.pop();
    }
    reverse(prefix.begin(),prefix.end());    //again reverse it to get prefix expression

    return prefix;
}

int main()
{
    string infix,prefix;
    cout<<"Enter the infix expression : ";
    cin>>infix;
    stack <char> stack;
    cout<<"INFIX EXPRESSION: "<<infix<<endl;
    prefix=Infixtoprefix(stack ,infix);
    cout<<"\nprefix expression is : "<<prefix;
    return 0;

}

