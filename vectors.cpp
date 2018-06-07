#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> v;
  
  for(int i=0;i<10;i++)
  {
    v.push_back(rand());
  }

  //sorting a vector
  sort(v.begin(), v.end());
  
  for(int i=0;i<v.size();i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  cout << "Reversing the vector" << endl;
  
  reverse(v.begin(), v.end());

  for(int i=0;i<v.size();i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
