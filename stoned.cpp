#include <bits/stdc++.h>

using namespace std;

int main()
{
	int one, two, count = 0;
	int n;
	cin >> n;
	char * a = new char[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i] == a[i+1])
		{
			count++;
		}
	}
	cout << count;
	return 0;
}
