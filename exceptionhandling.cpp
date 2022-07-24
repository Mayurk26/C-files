/*#include<iostream>
using namespace std;

int main()
{
    try{
        int num=11;
        if(num%2==0)
        {
            cout<<"it is a even no";
        }
        else{
            throw 12;
        }
    }
    catch(int no)
    {
          cout<<"access denied - it should be divisible by 2\n";
          cout<<"error is"<<no;
    }
}*/

//If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block, which will handle any type of exception:

#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (...) {
    cout << "Access denied - You must be at least 18 years old.\n";
  }
  return 0;
}