#include <iostream>

using namespace std;

int main()
{
	int n, b, p;
	int second = 0, res = 0;
	cin >> n >> b >> p;
	second = n * p;
	res = (n-1)*(2*b +1);
	cout << res << " " << second << endl;
	return 0;
}
