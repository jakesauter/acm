#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<char> v;
	string s;
	getline(cin, s);
	for(int i=0; i< s.length();i++)
	{
		if(s[i] != '+')
		{
			v.push_back(s[i]);
		}
	}
	sort(v.begin(), v.end());
	cout << endl << endl;
	int i=0;
	for(i=0; i< v.size()-1;i++)
	{	
		cout << v[i] << '+';
	}
	//i++;
	cout << v[i] << endl;
	return 0;
}
