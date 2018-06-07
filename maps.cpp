#include <iostream>
#include <map>
#include <string>
#include <math.h> /*floor(int), ceil(int)*/

using namespace std;

int main()
{
  /*defining an int map*/
  map<int, string> name_map;
  /*map<key, value> map_name*/

  string names[5]  = {"Tom", "Max", "Jerry", "John", "Patrik"};
  for(int i=0;i<5;i++)
  {
    name_map[i] = names[i]; 
  }

  /*iterating through the map*/
  for(map<int,string>::iterator it = name_map.begin();it!=name_map.end();it++)
  {
    cout << it->first << "  => " << it->second << endl;
  }

  cout << "size of map: " << name_map.size() << endl;

  /*adding a pair to a map*/
  name_map.insert(pair<int,string>(6, "Jauly"));
  name_map.insert(pair<int,string>(7, "Jack"));

  map<int,string>::iterator it = name_map.find(7);

  /*make sure the key was found*/
  if(it == name_map.end())
  {
    cout << "not found" << endl;
  }
  else
  {
    cout << "key found = " << it->second << endl;
    cout << "it: " << it->first << " " << it->second << endl;
    /*now how to erase a key value pair*/
    name_map.erase(it);
  }

  /*maps also have the count function*/
  cout << "map.count(5): " << name_map.count(5) << endl;
  cout << "map.count(4): " << name_map.count(4) << endl;

  cout << "clearing the map... ";
  name_map.clear();
  cout << "map cleared, map size: " << name_map.size() << endl;
  /*check if the map is truly empty*/
  cout << "Is the map empty?: " << name_map.empty() << endl;
  cout << "Its in binary idiot\n";

  return 0;
}
