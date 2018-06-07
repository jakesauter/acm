#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int n;
	int ans = 0;
	cin >> n;
	bitset<30> b(n);
	for(int i=0;i<30;i++)
	{
		if(b[i])
		{
			ans++;
		}	
	}
	cout << ans;
	return 0;
}
