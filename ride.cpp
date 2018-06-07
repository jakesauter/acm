/*
ID: jake.sa1
PROG: ride
LANG: C++11
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream out;
	out.open("ride.out");
	char comet[8];
	char group[8];
	int cometSum = 1, groupSum = 1;
	cin >> comet >> group;
	//converting
	for(int i=0;i<8;i++)
	{
		curComet = (((int)comet[i]) - ((int)'A')); 
		curGroup = (((int)group[i]) - ((int)'A'));
		if(
		cout <<  (((int)comet[i]) - ((int)'A')) << endl;
 		cout <<  (((int)group[i]) - ((int)'A')) << endl; 
	}
	cometSum %= 47;
	groupSum %= 47;
	cout << cometSum << " " << groupSum << endl;
	if(groupSum == cometSum)
	{
		out << "GO" << endl;
	}
	else
	{
		out << "STAY" << endl;
	}
	return 0;
}
