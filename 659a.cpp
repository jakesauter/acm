#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, a, b, res=0;
	cin >> n >> a >> b;
	int count=0;
	if(a > 0)
	{
		while(count < b)
		{
			a++;
			if(a == n)
			{
				a=0;
			}	
		}
	}	
	else
	{
		 
	}

	cout << a << endl;
}
