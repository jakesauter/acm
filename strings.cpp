#include <string>
#include <iostream>

using namespace std;

int main()
{
  string str;
  str = "123";
  str.push_back('4');
  str.insert(0,"0");
  cout << str << endl;
  return 0;
}
