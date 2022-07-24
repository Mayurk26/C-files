#include<iostream>
#include<vector>
using namespace std;
/*
template<class T>
void display(vector<T> &v)
{
    cout<<"\ndisplaying this vector"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";   //at() is used to access the element
    }
}

int main()
{
    //ways to create a vector

    vector<int>vec1;
    int size=5,element;
    //display(vec1);    //zero length  imteger vector
   /*  cout<<"Enter the size of the vector :"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the elements in the vector :";
        cin>>element;
        vec1.push_back(element);    //this function will enter element in vector
    }
    //vec1.pop_back();     //this function will pop out last element
    //display(vec1); 
    //vector<int> :: iterator iter=vec1.begin();   //this will create the iterator and vec .begin() means 
    //vec1.insert(iter,10);
    //vec1.insert(iter+1,10);    //this will insert at second position
    //vec1.insert(iter+1,5,10);     //this will insert 5 times
    //display(vec1); 
           

    vector<char>vec2(4);    //4- element character vector
    //vec2.push_back('5');    //6-element vector of 3s
    //display(vec2);

    vector<char>vec3(vec2);   //4-element chracter vector from vec2
    //display(vec3);

    vector<int>vec4(6,13); 
    display(vec4);
    cout<<"\nsize of vector : ";
    cout<<vec4.size();
    vec4.resize(8);
    display(vec4);
    vec4.assign(3,100);
     display(vec4);

    //cout<<vec4.max_size();

    


    
  /*  cout<<"Enter the size of the vector :"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the elements in the vector :";
        cin>>element;
        vec1.push_back(element);    //this function will enter element in vector
    }
    //vec1.pop_back();
    //display(vec1); 
    //vector<int> :: iterator iter=vec1.begin();   //this will create the iterator and vec .begin() means 
    //vec1.insert(iter,10);
    //vec1.insert(iter+1,10);    //this will insert at second position
    //vec1.insert(iter+1,5,10);     //this will insert 5 times
    //display(vec1); 
           //this function will pop out last element
    


}*/

int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    cout << "\n\nOutput of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";




    cout << "\n\nSize : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
  
    // resizes the vector size to 4
    g1.resize(4);
  
    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();
  
    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
  
    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";



    /*
    reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/
cout<<"\n-----------------------------*********************-----------------------------------";

    vector<int> g2;

	for (int i = 1; i <= 10; i++)
		g2.push_back(i * 10);

	cout << "\nReference operator [g] : g2[1] = " << g2[0];

	cout << "\nat : g2.at(4) = " << g2.at(4);

	cout << "\nfront() : g2.front() = " << g2.front();

	cout << "\nback() : g2.back() = " << g2.back();

	// pointer to the first element
	int* pos = g2.data();

	cout << "\nThe first element is " << *pos;
    *pos++;
    cout<<*pos;

 cout<<"\n\n----------------------------------********************************-------------------------";

    vector<int> v;

	// fill the array with 10 five times
	v.assign(5, 10);

	cout << "\n\nThe vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	// inserts 15 to the last position
	v.push_back(15);
	int n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	// removes last element
	v.pop_back();

	// prints the vector
	cout << "\nThe vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	// inserts 5 at the beginning
	v.insert(v.begin(), 5);

	cout << "\nThe first element is: " << v[0];

	// removes the first element
	v.erase(v.begin());

	cout << "\nThe first element is: " << v[0];

	// inserts at the beginning
	v.emplace(v.begin(), 5);
	cout << "\nThe first element is: " << v[0];

	// Inserts 20 at the end
	v.emplace_back(20);
	n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	// erases the vector
	v.clear();
	cout << "\nVector size after erase(): " << v.size();

	// two vector to perform swap
	vector<int> v11, v22;
	v11.push_back(1);
	v11.push_back(2);
	v22.push_back(3);
	v22.push_back(4);

	cout << "\n\nVector 1: ";
	for (int i = 0; i < v11.size(); i++)
		cout << v11[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v22.size(); i++)
		cout << v22[i] << " ";

	// Swaps v1 and v2
	v11.swap(v22);

	cout << "\nAfter Swap \nVector 1: ";
	for (int i = 0; i < v11.size(); i++)
		cout << v11[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v22.size(); i++)
		cout << v22[i] << " ";
}

    
