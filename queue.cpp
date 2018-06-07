#include <iostream>
#include <queue>

using namespace std;

int main()
{
  queue<int> q;
  for(int i=0;i<10;i++)
  {
    q.push(i);
  } 
  
  cout << "size: " << q.size() << endl;

  cout << "front of the queue: " << q.front() << endl;
  cout << "back of the queue: " << q.back() << endl;

  //popping from the front of the queue 
  q.pop();

  //determing if the queue is empty
 
  cout << "is the queue empty?: " << q.empty() << endl;

  cout << "new front of the queue: " << q.front() << endl;
}
