#include <iostream>
#include <stdio.h> //getchar, puts
#include <sstream> //stringstream


using namespace std;

int main()
{
  int c;
  puts("Enter text. Include a dot ('.') in a sentence to exit:");
  do
  {
    c=getchar();
    putchar(c);
  }while(c!='.');

  string line;
  while(getline(cin,line))
  {
    cout << "line: " << line << endl;
  }
  return 0;
}
