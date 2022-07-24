//exception handling and inheritance
   //can be implemented with the help of inheritance.
   //object thrown by derived class is caught by the first catch block
/*
#include<iostream>
using namespace std;

class demo1
{

};
class demo2: public demo1{};

int main()
{
    for(int i=0;i<=2;i++)
     {
         try{
             if(i==1)
             {
                 throw demo1();
             }
             else if(i==2)
             {
                 throw demo2();
             }
         }
         catch(demo1 d1)
         {
             cout<<"caught exception of demo1 class\n";
         }
         catch(demo2 d2)
         {
             cout<<"caught exception of demo2 class\n";
         }
     }
}

//although we have made seperate catch block for demo2 class but it will execute the first catch block only
  */

//********==========*********++++++++--------=======//

 //exception handling with constructor

 //the constructor does not written any value but with the help of try and catch block we can   


#include<iostream>
using namespace std;

class demo
{
     int num;
     public:
     demo(int x){
         try
         {
             
                 if(x==0)
                 {
                     throw "Zero not aloowed\n";
                     num=x;
                     show();
                 }
                 else if(x==1)
                    show();
             
         }
         catch(const char *exp)
         {
             cout<<"exception caught\n";
             cout<<exp<<endl;
         }
         
     }
     void show()
     {
         cout<<"Num="<<num<<endl;
     }
};

int main()
{
    //constructor will be called
    demo(0);
    cout<<"again creating object\n";
    demo(1);
}
