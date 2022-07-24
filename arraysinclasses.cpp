#include<iostream>
using namespace std;

class shop
{
    int item[100];
    int price[100];
    int counter;
    public:
    void initcounter(void){ counter=0 ;}
    void setprice(void);
    void displayprice(void);
};

void shop:: setprice(void)
{
    cout<<"enter id "<<counter +1<<endl;
    cin>>item[counter];
    cout<<"enyter the price of item"<<endl;
    cin>>price[counter];
    counter++;
}

void shop::displayprice(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"the price of item with id "<<item[i] <<" is "<<price[i]<<endl;

    }
}
int main()
{
    shop s;
    s.initcounter();
    s.setprice();
    s.displayprice();
    return 0;
}