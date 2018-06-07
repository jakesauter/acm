#include <iostream>
#include <array>//size
#include <algorithm>

using namespace std;

int main()
{
  /*sorting an array*/
  int a_size = 10;
  int a[a_size] = {4,3,2,9,1,7,6,5,4,4};
  sort(a,a+a_size);
  for(int i=0;i<a_size;i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  
  /*sorting a vector*/
  vector<int> v = {1,2,3,4,5,5,6,7,8,9};
  sort(v.begin(), v.end());
  for(int i=0;i<v.size();i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;
}
