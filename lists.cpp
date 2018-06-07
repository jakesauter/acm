#include <iostream>
#include <list>

using namespace std;

int main()
{
  cout << "Using a list as a Queue\n";
  list<int> nums(5,0); //{0, 0, 0, 0, 0}
  nums.push_front(2);
  nums.push_front(1);
  for(list<int>::iterator it = nums.begin();it!=nums.end();it++)
  {
    cout << *it << " ";
  }
  list<int>::iterator it = nums.begin();
  advance(it,2);
  *it = 10;
  return 0;
}
