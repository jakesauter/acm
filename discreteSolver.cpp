#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char *a, int l, int r)
{
	int i;
	if(l==r)
	{
		cout << "a: " << a << endl;
	}
	else
	{
		for(i=l;i<=r;i++)
		{
			swap((a+l), (a+i));
			permute(a, l+1, r);
			swap((a+1), (a+i));//backtrack
		}
	}
}

int main()
{
	vector<vector<char>[]> solutions;
        vector<char> s1, s2, s3, s4;
	cout << "s1: ";
	cin >> s1;
	cout << "s2: ";
	cin >> s2;
	cout << "s3: ";
	cin >> s3;
	cout << "s4: ";
	cin >> s4;
	char board[4][4];
	cout << "All permutations of s1" << endl;
	int n = strlen(s1);
	
	//now add words to board in all possible orders and check if they
	//are the same across and down
	
	return 0;
}
