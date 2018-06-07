#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{	
	int n, k, res;
	cin >> n >> k;
	vector<int> s(n);
	for(int i=0;i<n;i++)
	{
		cin >> s[i];
	}
	if(n <= k)
	{
		cout << s[n-1] << endl;return 0;
	}
	if(n ==1)
	{
		cout << s[0] << endl; return 0;
	}
	else if(n==2)
	{
		cout << s[0]+s[1] << endl; return 0;
	}
	res = max(s[n-1], (s[n-2]+s[n-3]));
	cout << res << endl;
	return 0;
}
