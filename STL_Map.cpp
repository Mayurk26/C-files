//Maps are associative array
#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<string>

using namespace std;
/*
int main()
{
    map<string, int>marksmap;
    marksmap["Mayur"]=99;
    marksmap["Rahul"]=87;
    marksmap["Abhi"]=78;
    marksmap["Sanku"]=76;

    marksmap.insert({{"Sumit",98},{"ATharv",97}});

    map<string,int> :: iterator iter;
    for(iter=marksmap.begin(); iter!=marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
	}
	cout<<endl;

	for(auto &value : marksmap)
	{
		cout<<value.first<<" "<<value.second<<endl;
	}

    cout<<"The size is : "<<marksmap.size()<<endl;
    cout<<"the maxsize is : "<<marksmap.max_size()<<endl;
    cout<<"The empty return value is : "<<marksmap.empty()<<endl;
    return 0;
}
*/
/*
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{

	// empty map container
	map<int, int> gquiz1;

	// insert elements in random order
	gquiz1.insert({1, 40});
	gquiz1.insert(pair<int, int>(2, 30));
	gquiz1.insert(pair<int, int>(3, 60));
	gquiz1.insert(pair<int, int>(4, 20));
	gquiz1.insert(pair<int, int>(5, 50));
	gquiz1.insert(pair<int, int>(6, 50));
	gquiz1.insert(pair<int, int>(7, 10));

	// printing map gquiz1
	map<int, int>::iterator itr;
	cout << "\nThe map gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// assigning the elements from gquiz1 to gquiz2
	map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

	// print all elements of the map gquiz2
	cout << "\nThe map gquiz2 after"
		<< " assign from gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// remove all elements up to
	// element with key=3 in gquiz2
	cout << "\ngquiz2 after removal of"
			" elements less than key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	// remove all elements with key = 4
	int num;
	num = gquiz2.erase(4);
	cout << "\ngquiz2.erase(4) : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	cout << endl;

	// lower bound and upper bound for map gquiz1 key = 5
	cout << "gquiz1.lower_bound(5) : "
		<< "\tKEY = ";
	cout << gquiz1.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = "
		<< gquiz1.lower_bound(5)->second << endl;
	cout << "gquiz1.upper_bound(5) : "
		<< "\tKEY = ";
	cout << gquiz1.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = "
		<< gquiz1.upper_bound(5)->second << endl;

	return 0;
}*/


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//simple question
// given n strings print unique strings with lexalogical order with frequency
/*
int main()
{
	map <string,int> m;
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		m[s]++;
	}
	for(auto value : m)
	{
		cout<<value.first<<" "<<value.second<<endl;
	}

}
*/

// Unorderred map

//simple questtion
// given strings and q queries.find frequensy of strings givwn in the queries


int main()
{
	unordered_map<string,int> m;
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		
		cin>>s;
		m[s]++;
	}
	int q;
	cin>>q;
	while(q--)
	{
		cin>>s;
		cout<<m[s]<<endl;
	}
}


