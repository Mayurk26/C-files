#include<iostream>
#include<string.h>
using namespace std;
#define MAX 50

class sta
{
    private:
    char data[MAX], str[MAX];
    int top,length,count;
    void push(char );
    char pop();
    public:
    sta()
    {
        top=-1;
        length = 0;
        count=0;
    }
    void getstring();
    void extractstring();
    void checkPalindrome();
}ob;

void sta :: getstring()
{
    cout<<"\nEnter the string : ";
    cin.getline(str,MAX);
    length = strlen(str);
}

void sta :: extractstring()
{
    char temp[MAX],j;
    for(int i=0;i<length;i++)
    {
        temp[i]=str[i];
    }
    j=0;
    for(int i=0;i<length;i++)
    {
        if(isalpha(temp[i]))
        {
            str[j]=tolower(temp[i]);
            j++;
        }
    }
    str[j]='\0';
    cout<<str;
    length=j;
}

void sta:: checkPalindrome()
{
    for(int i=0;i<length;i++)
    {
        push(str[i]);
    }
    for(int i=0;i<length;i++)
    {
        if(str[i]==pop())
           count++;
    }
    if(count==length)
    {
        cout<<"\nEntered string is palindrome";
    }
    else
    {
        cout<<"\nEntered string is not palindrome";
    }

}

void sta ::push(char ch)
{
    if(top==MAX-1)
    {
        cout<<"\nstack is overflow";
        return;
    }
    else
    {
        top++;
        data[top]=ch;
    }
}

char sta :: pop()
{
    if(top==-1)
    {
        cout<<"\nstack is underflow";
    }
    else
    {
        char temp =data[top];
        top--;
        return temp;
    }
}




int main()
{
    ob.getstring();
    cout<<"\n\nstring extracted after removing the punctuations and symbols : ";
    ob.extractstring();
    ob.checkPalindrome();
}
