#include <iostream>
#include <string>
using namespace std;
void main(void)
{
	int s1length, s2length;
	int result = 0;
	string s1, s2;

	cin >> s1;
	cin >> s2;

	s1length = s1.length();
	s2length = s2.length();
	
	if(s1length == s2length)
	{
		int temp1=s1length-1;
		int temp2=s2length-1;
		for(int i = 0; i<s1length; i++)
		{
			if(s1.at(temp1) != s2.at(temp2))
			{
				result++;
			}
			temp1--;
			temp2--;
		}
	}
	else if(s1length < s2length)
	{
		int temp1=s1length-1;
		int temp2=s2length-1;
		for(int i = 0;i<s1length;i++)
		{
			if(s1.at(temp1) != s2.at(temp2))
			{
				result++;
			}
			temp1--;
			temp2--;
		}
		for(int i = 0;i<(s2length-s1length);i++)
		{
			if(s2.at(temp2) == '1')
			{
				result++;
			}
			temp2--;
		}
	}
	else if(s1length > s2length)
	{
		int temp1 = s1length-1;
		int temp2 = s2length-1;
		for(int i = 0;i<s2length;i++)
		{
			if(s1.at(temp1) != s2.at(temp2))
			{
				result++;
			}
			temp1--;
			temp2--;
		}
		for(int i = 0;i<(s1length-s2length);i++)
		{
			if(s1.at(temp1) == '1')
			{
				result++;
			}
			temp1--;
		}
	}
	cout << result;
}