#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  map<string,string> str_map;
  str_map.insert(pair<string,string>("one","two"));
  str_map.insert(pair<string,string>("two", "three"));
  str_map.insert(pair<string,string>("three","four"));
  str_map.insert(pair<string,string>("four","five"));
  cout << str_map[str_map[str_map[str_map["one"]]]] << endl;
  return 0;
}
