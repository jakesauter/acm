#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  vector<int> v(arr, arr + sizeof(arr)/sizeof(int));

  for(int i=0;i<v.size();i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  
  return 0;
}
