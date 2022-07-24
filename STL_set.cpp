// CPP program to demonstrate various functions of
// Set in C++ STL
#include <iostream>
#include <iterator>
#include <set>

using namespace std;
/*
int main()
{
	// empty set container
	set<int, greater<int> > s1;

	// insert elements in random order
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(20);
	s1.insert(50);

	// only one 50 will be added to the set
	s1.insert(50);
	s1.insert(10);

	// printing set s1
	set<int, greater<int> >::iterator itr;
	cout << "\nThe set s1 is : \n";
	for (itr = s1.begin(); itr != s1.end(); itr++) {
		cout << *itr << " ";
	}
	cout << endl;

	// assigning the elements from s1 to s2
	set<int> s2(s1.begin(), s1.end());

	// print all elements of the set s2
	cout << "\nThe set s2 after assign from s1 is : \n";
	for (itr = s2.begin(); itr != s2.end(); itr++) {
		cout << *itr << " ";
	}
	cout << endl;

	// remove all elements up to 30 in s2
	cout << "\ns2 after removal of elements less than 30 "
			":\n";
	s2.erase(s2.begin(), s2.find(30));
	for (itr = s2.begin(); itr != s2.end(); itr++) {
		cout << *itr << " ";
	}

	// remove element with value 50 in s2
	int num;
	num = s2.erase(50);
	cout << "\ns2.erase(50) : ";
	cout << num << " removed\n";
	for (itr = s2.begin(); itr != s2.end(); itr++) {
		cout << *itr << " ";
	}

	




auto it=s2.find(30);
	if(it!=s2.end())
	{
		s1.erase(it);

	}

	for (itr = s2.begin(); itr != s2.end(); itr++) {
		cout << *itr << " ";
	}




	// lower bound and upper bound for set s1
	cout << "s1.lower_bound(30) : \n"
		<< *s1.lower_bound(30) << endl;
	cout << "s1.upper_bound(30) : \n"
		<< *s1.upper_bound(30) << endl;

	// lower bound and upper bound for set s2
	cout << "s2.lower_bound(40) :\n"
		<< *s2.lower_bound(40) << endl;
	cout << "s2.upper_bound(30) : \n"
		<< *s2.upper_bound(30) << endl;

	return 0;
} 
*/

//unordered set
//simple question
//given strings and queries. for given strings in queries if strings are found print yes otherwise no
/*
int main()
{
	unordered_set<string> m;
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		m.insert(s);

	}
	int q;
	cin>>q;
	while(q--)
	{
		cin>>s;
		if(m.find(s)==m.end())
		{
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////

//multiset
//can take duplicates
/*
int main()
{
	multiset<int> m;
	m.insert(10);
	m.insert(10);
	m.insert(20);
	m.insert(30);

	for(auto &value : m)
	{
		cout<<value<<endl;
	}

	auto it = m.find(10);
	if(it != m.end())
	{
		m.erase(it);
	}
cout<<"///////////////////";
	for(auto &value : m)
	{
		cout<<value<<endl;
	}

	//if use direct erase(10);
	//then all 10 will del directly from set
	//m.erase(10);

}*/



//question

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		multiset<long long >bags;
		for(int i=0;i<n;i++){
			long long candy_ct;
			cin>>candy_ct;
			bags.insert(candy_ct);

		}
		long long total_candies=0;
		for(long long i=0;i<k;i++)
		{
	        auto last_it= --bags.end(); 
			long long candy_ct= *last_it;
			total_candies += candy_ct;
			bags.erase(last_it);
			bags.insert(candy_ct/2);

		}
		cout<<total_candies<<endl;
	}
}
