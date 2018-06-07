#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> vec;
  vec.push_back(2);
  vec.push_back(1);
  vec.push_back(4);
  for(int i=0;i<vec.size();i++)
  {
    cout << vec[i] << " " << endl;
  }
  sort(vec.begin(), vec.end());
  for(int i=0;i<vec.size();i++)
  {
    cout << vec[i] << " " << endl;
  }
  return 0;
}
