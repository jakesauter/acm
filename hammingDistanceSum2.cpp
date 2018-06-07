#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string s1, s2;
	s1=s2="";
	getline(cin, s1);
	getline(cin, s2);
	//we want the same variable to always be the smaller string
	if(s1.length() > s2.length())
	{
		string temp;
		temp = s2;
		s2 = s1;
		s1 = temp;
	}
	//we want the strings to be the same size but putting 1's in front of both and making them the same size so that we can exor them
	int diff = s2.length() - s1.length();
	while(diff > 0)
	{
		s1.insert(0, "0");
		diff--;
	}
	s1.insert(0,"1");
	s2.insert(0,"1");
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	int result = 0;
	for(int i=0;i<s2.length();i++)
	{
		result += abs(s1[i] - s2[i]);	
	}
	cout << result << endl;
	return 0;
}
