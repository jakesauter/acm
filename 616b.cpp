#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int streets = 0, avenues = 0;
	int  min = 0, rowmin = 0;
	cin >> streets >> avenues;
	int temp = 0;
	for(int i=0;i<streets;i++)
	{
		cin >> rowmin;
		for(int j=1;j<avenues;j++)
		{
			cin >> temp;
			if(temp < rowmin)
			{
				rowmin = temp;
			}	
		}
		if(rowmin > min)
		{
			min = rowmin;
		}
	}
	cout << min;
	return 0;
}
