#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> needed;
	int n,m,l,temp;
	string input;
	bool found = false;
	cin >> n >> m;
	//filling the needed vector
	for(int i=0;i<m;i++)
	{
		needed.push_back(i+1);
	}
	//taking input line by line
	for(int i=0;i<n;i++)
	{
		cin >> l;//get rid of the first character
		getline(cin, input);//the rest of the input is what we can eliminate from needed
		for(int j=0;j<input.length();j++)//iterate through the input, check if it is in needed, then remove if from needed if its there
		{
			for(int c = 0;c < needed.size();c++)//checking if it is in needed
			{
				if(needed[c] == ((int)input[j])-48)
				{
					needed.erase(needed.begin()+c);
					break;
				}
			}
		}
	}
	if(needed.size() == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}
