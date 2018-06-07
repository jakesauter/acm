#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n, k, max = 0;
	string s;
	cin >> n >> k >> s;
	//calc the max diff
	for(int i=0;i<n;i++)
	{
		max += ((int)'z') - ((int)s[i]);
	}
	if(n*25 > max)
	{
		cout << -1 << endl;
		return 0;
	} 
	int i = 0, maxDif = 0;
	while(k>0)
	{
		maxDif = ((int)'z') - ((int)s[i]);
		if(k < maxDif)
		{
			s[i] = char(((int)s[i]) + k); 
			k = 0;
		}
		else	
		{
			s[i] = char(((int)s[i]) + maxDif);
			k-=maxDif;
		}
		i++;
	}
	cout << s << endl;
	return 0;
}
