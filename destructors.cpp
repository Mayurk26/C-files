/* destructors never take an argumrnt
nor returns any value*/
#include<iostream>
using namespace std;
int count=0;
class num
{
    public:
    num(){
        count++;
        cout<<"this is the time when the constructor is called for object number"<<count<<endl;
    }
    ~num(){
        cout<<"this is time when destructor is called for object no"<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"we are inside our main func"<<endl;
    cout<<"creating first objects"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}
