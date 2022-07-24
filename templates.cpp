#include<iostream>
using namespace std;
/*
template<class T>
class vector{
    public:
    T *arr;
    int size;
    
    vector(int m){
        size=m;
        arr=new T[size];
        
    }
    T dotproduct(vector &v)
    {
        T d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]* v.arr[i];
        }
        return d;
    }

};
int main()
{
  /*   vector<int>v1(3);
    v1.arr[0]=6;
    v1.arr[1]=8;
    v1.arr[2]=2;
    vector <int>v2(3);
    v2.arr[0]=1;
    v2.arr[1]=2;
    v2.arr[2]=1;
    int a=v1.dotproduct(v2);
    cout<<a<<endl;

     vector<float>v1(3);
    v1.arr[0]=6.1;
    v1.arr[1]=8.4;
    v1.arr[2]=2.0;
    vector <float>v2(3);
    v2.arr[0]=1.4;
    v2.arr[1]=2.4;
    v2.arr[2]=1,1;
    float a=v1.dotproduct(v2);
    cout<<a<<endl;



    return 0;

    
}

//template fuction
template<class T>

    T mymax(T x, T y)
    {
        if(x>y)
        {
            return x;
        }
        else
          return y;
    }



int main()
{
    cout<<mymax<int>(2,6)<<endl;
    cout<<mymax<float>(2.3,1.8)<<endl;
    cout<<mymax<char>('s','f');
    return 0;
}

*/

//Overloading function template
   //here we can define multiple functions with the same nameand working with different
   //types of parameters
   //you may overload function template either by non template function or by another template


template<class T>
void num(T x, T y)
{
    cout<<"template\n";
}
void num(int a,int b)
{
    cout<<"Non-template\n";
}

int main()
{
    num(1,2);
    num('g','h');
    
}
