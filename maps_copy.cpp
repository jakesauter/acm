#include <iostream>
#include <map>
#include <string>
#include <math.h> /*floor(int), ceil(int)*/

using namespace std;

int main()
{
  /*defining an int map*/
  map<int,string> name_map;
  string names[5] = {"name_1", "name_2", "name_3", "name_4", "name_5"};

  for(int i=0;i<5;i++)
  {
    name_map[i] = names[i];
  }

  /*iterating through the map*/
  for(map<int,string>::iterator it = name_map.begin();it!=name_map.end();it++)
  {
    cout << it->first << " => " << it->second << endl;
  }
  cout << "size of the map: " << name_map.size() << endl;

  /*adding a pair to a map*/
  name_map.insert(pair<int,string>(6,"name_6"));
  name_map.insert(pair<int,string>(7,"name_7"));

  map<int,string>::iterator it = name_map.find(7);

  /*make sure that the map key was found*/
  if(it == name_map.end())
  {
    cout << "not found" << endl;
  }
  else
  {
    cout << "key found = " << it->second << endl;
    cout << "it: " << it->first << " " << it->second << endl;
    /*now erasing a key value pair*/
    name_map.erase(it);
  }

  /*maps also have the count function*/
  cout << "map.count(4): " << name_map.count(4)  << endl;
  cout << "map.count(5): " << name_map.count(5)  << endl;

  cout << "clearing the map... \n";
  name_map.clear();
  cout << "map cleared, map size: " << name_map.size() << endl;
  /*checking if the map is truly empty*/
  cout << "Is the map empty: " << name_map.empty() << endl;

  cout << "Its in binary dummy\n\n";
  return 0;
}

