#include <string>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <list>

using namespace std;

int main()
{
  int x;
  while(scanf("%d", &x)!=EOF)
  {
    cout << "x: " << x << endl << endl;
  }

  list<int> nums;
  string line;
  while(getline(cin, line))
  {
    stringstream stream(line);
    int c;
    while(stream >> c)
    {
      cout << "c: " << c << endl;
      nums.push_back(c);
    }
    cout << "size of nums: " << nums.size() << endl;
    cout << "line: " << line << endl;

  }
}

