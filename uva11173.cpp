#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, n, k;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		 scanf("%d %d", &n, &k);
		 printf("%d\n", k^(k>>1));
	}
	return 0;
}
