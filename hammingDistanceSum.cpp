//#include <bits/stdc++.h>//includes all headers in c++ library
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int shortest = 0, s1current, s2current, res, s1length, s2length;
	res = 0;
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	s1length = s1.length();
	s2length = s2.length();
	if(s1length > s2length)
	{
		shortest = s1length;
		string stemp;
		int itemp;
		stemp = s1;
		s1 = s2;
		s2 = itemp;
		itemp = s1length;
		s1length = s2length;
		s2length = itemp;
	}
	shortest = s1length;
	for(int i=0;i<shortest;i++)
	{
		s1current = (int)s1[s1length-i];
		s2current = (int)s2[s2length-i];
		if(s1current != s2current)
		{
			res++;
		}
	}
	for(int i=0;i<(s2length-s1length);i++)
	{
		if(s2[s2length-s1length-i] == 1)
		{
			res++;
		}
	}
	cout << res << endl;
	return 0;
}
