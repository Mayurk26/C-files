#include<iostream>
using namespace std;

//constructor is a special method which calls automatically after the objecty has been created
//The constructor has the same name as the class, it is always public, and it does not have any return value.
/*
class myclass
{
    public:
    myclass()    //constructor
    {
        cout<<"hello world";
    }
};

int main()
{
    myclass obj;    //object will call constructor
    return 0;
}*/



//parameterized constructor
/*
class chicken
{
    public:
    string dish;
    string type;
    int plates;
    chicken(string x, string y, int z)
    {
        dish=x;
        type=y;
        plates=z;
    }
};

int main()
{
    chicken obj1("lollipop","spicy",2);
    chicken obj2("handi","full",2);

    cout<<obj1.dish<<" "<<obj1.type<<" "<<obj1.plates<<endl;
    cout<<obj2.dish<<" "<<obj2.type<<" "<<obj2.plates<<endl;

}

//constructors can be define ouside the class like methods
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}         */

//destructors

class Demo
{
    private:
     int num1,num2;
    public:
    
    Demo(int n1,int n2){
        cout<<"inside constructor"<<endl;
        num1=n1;
        num2=n2;
    
    }
};
void display();
{
    cout<<num1<<endl;
    cout<<num2<<endl;
}

~Demo()
{
    cout<<"inside destructor";
}

int main()
{
    Demo obj1(10,20);
    obj1.display();
    return 0;

}