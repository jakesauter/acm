#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int n, k, x;
	int max;
	cin >> n >> k >> x;
	for(int i=0;i<n;i++)
	{
		cin >> max;
		v.push_back(max);
	}
	//sort(v.begin(), v.end());
	max = v[n-1];
	cout << "max: " << max << endl;
	for(int i=0;i<k;i++)
	{
		max*=x;
	}
	cout << "max: " << max << endl;
	bitset<64> b(max);
	int before, after;
	for(int i=0;i<n-1;i++)
	{	
		before = (int)(b.to_ulong());
		cout<< "i: " << i << endl;
		cout << "v[i]: " << v[i] << endl;
		bitset<64> b1(v[i]);
		b = b|b1;
		after = ((int)(b.to_ulong()));
		cout<< "before: " << before << " after: " << after << endl;
		if(before == after)
		{
			bitset< =  before+((int)(b1.to_ulong()));;
		}
	}
	cout << (int)(b.to_ulong()) << endl;
	/*for(int i=0;i<n-1;i++)
	{
		max+=v[i];
	}*/
}
