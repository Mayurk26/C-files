//virtual functions example and creating rules 

#include<iostream>
using namespace std;

class CWH
{
    protected:
    string title;
    float rating;
    public:
    CWH(string s ,float r)
    {
        title=s;
        rating =r;
    }
    virtual void display()
    {

    }
};

class CWHvideo : public CWH
{
    float videolength;
    public:
    CWHvideo(string s,float r,float vl) : CWH(s , r)
    {
        videolength=vl;
    }
    void display()
    {
        cout<<"Title of videoclip is : "<<title<<endl;
        cout<<"rating of the video is "<<rating<<" out of 5"<<endl;
        cout<<"the length of the video is "<<videolength<<endl;
    }
};

class CWHtext : public CWH{
    int words;
    public:
    CWHtext(string s,float r ,int wd) : CWH(s,r)
    {
        words=wd;
    }
    void display()
    {
        cout<<"\nTitle of textchap is : "<<title<<endl;
        cout<<"rating of the chap is "<<rating<<" out of 5"<<endl;
        cout<<"the words in the textchapter is "<<words<<endl;
    }
};

int main()
{
    string title;
    float rating , vlen;
    int words;

    //for CWHvideo
    title="python tutorial";
    vlen=15.6;
    rating=4.5;
    CWHvideo video(title,rating ,vlen);

    //for CWHtext
    title="django tutorial";
    words=65;
    rating=4.4;
    CWHtext text(title,rating ,words);

    CWH *tuts[2];
    tuts[0]=&video;
    tuts[1]=&text;
    tuts[0]->display();
    tuts[1]->display();
    return 0;

}


/*
rules for virtual functions
1. they cannot be static .
2. they are accessed by object pointers
3. virtual functions can be a friend of another class
4. A virtual function in a base class might not be used.*/