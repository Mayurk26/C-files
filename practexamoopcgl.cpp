#include<iostream>
#include<string.h>
using namespace std;

class publication
{
    protected:
    string title;
    float price;
    public:
      void set_zero(void)
      {
          title="000";
          price=0.0;
      }
      void getdata(void)
      {
          cout<<"\n Enter the name : ";
          cin>>title;
          cout<<"\n Enter the price : ";
          cin>>price;
      }
      void putdata(void)
      {
          cout<<"\nName : "<<title;
          cout<<"\nPrice : "<<price;
      }

};

class Book : public publication
{
    int page_count;
    public:
     void set_zero(void)
     {
         page_count=0;
         publication :: set_zero();
     }
     void getdata(void)
     {
         publication :: getdata();
         cout<<"\n Enter the no of pages : ";
         cin>>page_count;
         try
         {
            if(price<0)
             throw(0);
            if(page_count<0)
             throw(0.0);
         }
         catch(double x)
         {
            cout<<"\n\t Exception-- Page count cannot hold a negetive value ";
	        cout<<"\n\t Turning all values to zero.";
            set_zero();
         }
         catch(int x)
         {
             cout<<"\n\t Exception-- price cannot hold a negative value ";
             cout<<"\n\t Turning all values to zero.";
             set_zero();
         }
         
     }

     void putdata()
     {
         publication::putdata();
         cout<<"\n\t Number of pages : "<<page_count;
         cout<<endl<<endl;
         
     }

};

class Tape : public publication
{
    float playing_time;
    public:
     void set_zero(void)
     {
         playing_time=0.0;
         publication :: set_zero();
     }
     void getdata(void)
     {
         publication :: getdata();
         cout<<"\n\t Enter playing time : ";
         cin>>playing_time;
         try
         {
             if(price<0)
             throw 0;
             if(playing_time<0)
             throw(0.0);
         }
         catch(int x)
         {
             cout<<"\n\t Exception-- price cannot be negative value ";
             cout<<"\n\t Turning all values to zero";
             set_zero();

         }
         catch(double x)
         {
             cout<<"\n\t Exception-- playing time cannot be negative value ";
             cout<<"\n\t Turning all values to zero";
             set_zero();
         }

    }
    void putdata(void)
    {
        publication :: putdata();
        cout<<"\n\t Playing time :"<<playing_time;
        cout<<endl<<endl;

    }
};

int main()
{
    Tape T;
    Book B;
    cout<<"\n\nEnter the data of Tape: \n";
    T.getdata();
    T.putdata();
    cout<<"\n\nEnter the data of Book: \n";
    B.getdata();
    B.putdata();
    return 0;

}