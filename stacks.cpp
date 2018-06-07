#include <iostream>
#include <stack>

using namespace std;

int main()
{
  int i, j;
  stack<int> s;
 
  for(i=0;i<10;i++)
  {
    s.push(i);
  }

  cout << "top of the stack: " << s.top() << endl;

  //poping off the top of the stack
  
  s.pop();

  cout << "is the stack empty?: " << s.empty() << endl;

  cout << "new top of the stack: " << s.top() << endl;

  return 0;
}
