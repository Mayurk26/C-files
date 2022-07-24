/*
#include<iostream>
#include<stack>
using namespace std;

bool isOperator(char c)
{
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int precedence(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 

string InfixToPostfix(stack<char> s, string infix)
{
	string postfix;
	for(int i=0;i<infix.length();i++)
	{
		if((infix[i] >= 'a' && infix[i] <= 'z')||(infix[i] >= 'A' && infix[i] <= 'Z'))
		{
			postfix+=infix[i];
		}
		else if(infix[i] == '(')
		{
			s.push(infix[i]);
		}
		else if(infix[i] == ')')
		{
			while((s.top()!='(') && (!s.empty()))
			{
				char temp=s.top();
				postfix+=temp;
				s.pop();
			}
			if(s.top()=='(')
			{
				s.pop();
			}
		}
		else if(isOperator(infix[i]))
		{
			if(s.empty())
			{
				s.push(infix[i]);
			}
			else
			{
				if(precedence(infix[i])>precedence(s.top()))
				{
					s.push(infix[i]);
				}	
				else if((precedence(infix[i])==precedence(s.top()))&&(infix[i]=='^'))
				{
					s.push(infix[i]);
				}
				else
				{
					while((!s.empty())&&( precedence(infix[i])<=precedence(s.top())))
					{
						postfix+=s.top();
						s.pop();
					}
					s.push(infix[i]);
				}
			}
		}
	}
	while(!s.empty())
	{
		postfix+=s.top();
		s.pop();
	}
	
	return postfix;
}

int main() 
{  

  	string infix_exp, postfix_exp;
  	cout<<"Enter a Infix Expression :"<<endl;
  	cin>>infix_exp;
  	stack <char> stack;
	cout<<"INFIX EXPRESSION: "<<infix_exp<<endl;
  	postfix_exp = InfixToPostfix(stack, infix_exp);
  	cout<<endl<<"POSTFIX EXPRESSION: "<<postfix_exp;
	  
	return 0;
}*/
#include<iostream>
#define N 20
using namespace std;

class convert
{
public:
    string exp;
    string postfix;
    char stack[N];
    char token;
    char x;
    int i, j, top;

    convert()
    {
        i = j = 0;
        top = -1;
        token = x = '\0';
        exp = postfix = '\0';
    }

    void input_exp()
    {
        cout << "\nEnter a Infix expression to convert: \n";
        cin >> exp;
    }
    int precedence(char x)
    {
        if (x == '(')
            return 0;
        else if (x == '+' || x == '-')
            return 1;
        else if (x == '*' || x == '/' || x == '%')
            return 2;
        else if (x == '^')
            return 3;

        return 0;
    }
    void push(char x)
    {
        if (top > N-1)
            cout << "\n Stack is full \n";
        else
        {
            top++;
            stack[top] = x;
        }
    }

    char pop()
    {
        char s;
        if (top <= -1)
            cout << "\n Stack is Empty \n";
        else
        {
            s = stack[top];
            top--;
        }
        return s;
    }
    void infixtopostfix()
    {
        for (i = 0; exp[i] != 0; i++)
        {
            token = exp[i];
            if (token == '(')
                push(token);
            else if (token == ')')
            {
                while ((x = pop()) != '(')
                {
                    postfix[j] = x;
                    j++;
                }
            }
            else if (token == '+' || token == '-' || token == '*' || token == '/' || token == '%' || token == '^')
            {
                while (precedence(stack[top]) >= precedence(token))
                {
                    x = pop();
                    postfix[j] = x;
                    j++;
                }
                push(token);
            }
            else
            {
                postfix[j] = token;
                j++;
            }
        }
        while (top != -1)
        {
            postfix[j] = stack[top];
            top--;
            j++;
        }
        postfix[j] = '\0';
        cout << "\n Postfix Expression is :  ";

        for (j = 0; postfix[j] != '\0'; j++)
            cout << postfix[j];
        cout << "\n";
    }
};

int main()
{
    char ch;
    cout <<"\n#### INFIX TO POSTFIX CONVERSION ####";
    do
    {
        convert c;
        c.input_exp();
        c.infixtopostfix();
        cout << "\nYou want to convert another expression, press y? \n";
        cin >> ch;
    } while (ch == 'y');

    return 0;
}