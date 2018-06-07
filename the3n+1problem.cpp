#include <iostream>

using namespace std;

int main()
{
	int i, j, pathLength, n;
	pathLength = 1;
	cin >> i >> j;	
	n = j;
	while(n > i)
	{	
		cout << "n: " << n << endl;
		if(n%2 == 1)
		{
			n = 3*n+1;
		}
		else
		{
			n = n/2;	
		}	
		pathLength++;
	}
	cout << i << " " << j << " " << pathLength << endl;
	return 0;
}
