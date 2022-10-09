//Task
//Given  names and phone numbers, assemble a phone book that maps friends' names to their respective 
//phone numbers. You will then be given an unknown number of names to query your phone book for. 
//For each  queried, print the associated entry from your phone book on a new line in the form 
//name=phoneNumber; if an entry for  is not found, print Not found instead.


//Note: Your phone book should be a Dictionary / Map / HashMap data structure.


//Sample Input
//3
//sam 99912222
//tom 11122222
//harry 12299933
//sam
//edward
//harry



//Sample Output
//sam = 99912222
//Not found
//harry = 12299933




//Explanation
//We add the following(Key, Value) pairs to our map so it looks like this:
//We then process each query and print key = value if the queried  is found in the map; otherwise, we print Not found.
//
//Query 0: sam
//Sam is one of the keys in our dictionary, so we print sam = 99912222.
//
//Query 1 : edward
//Edward is not one of the keys in our dictionary, so we print Not found.
//
//Query 2 : harry
//Harry is one of the keys in our dictionary, so we print harry = 12299933.




#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{
	int NumberOfTestCases = 0;
	string name;
	string number;
	map<string, string> phoneBook;


	cin >> NumberOfTestCases;

	for (int i = 0; i < NumberOfTestCases; i++)
	{
		cin >> name >> number;
		phoneBook.insert(pair<string, string>(name, number));
	}
	name = "abc";
	while (cin >> name)
	{
		auto itr = phoneBook.find(name);
		if (itr == phoneBook.end())
		{
			cout << "Not found\n";
		}
		else
		{
			cout << name << "=" << itr->second << endl;
		}
	}
	return 0;
}