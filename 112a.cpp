#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s1, s2;
	char c1, c2;
	int sum1=0, sum2=0;
	getline(cin, s1);
	getline(cin, s2);
	for(int i=0;i<s1.length();i++)
	{
		c1 = tolower(s1[i]);
		c2 = tolower(s2[i]);
		sum1+=(int)c1;
		sum2+=(int)c2;
	}
	if(sum1 == sum2)
	{
		cout << "0" << endl;
	}
	else if(sum1 > sum2)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
	return 0;
}
