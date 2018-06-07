#include <iostream>
#include <string>
#include <vector>

using namespace std;
 
vector< vector<char> >  table;
int m, n;

int* scan(string s, int i, int j, int di, int dj)
{
  int* arr = new int[2];
  arr[0] = i;
  arr[1] = j;
  int c = 0; //char index
  while(i < m && j < n)
  {
    cout << "s[" << c << "]: " << s[c] << endl;
    cout << "table[" << i << "][" << j << "]: " << table[i][j] << endl;
    if(table[i][j] != s[c])
    {
      return NULL;
    }

    c++;
    i += di;
    j+= dj;
  }

  if(c==s.length()-1)
  {

    return arr;
  }

  return NULL;
}

int* search_table(string s)
{
  int * x;
  int configs[8][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
  for(int i =0;i<m;i++)//iterating through rows
  {
    for(int j=0;j<n;j++)
    {
      for(int k=0;k<8;k++)
      {
        cout << "scan(" << s << ", " << i << ", " << j << ", " << configs[k][0] << ", " << configs[k][1] << endl;
        x = scan(s, i, j, configs[k][0], configs[k][1]);
          
        if(x!=NULL)
        {
          return x;
        }
      }
    }
  } 
  return NULL;
}

int main()
{
  int k;
  //taking input
  cin >> m >> n;
  
  //making the table
  table.resize(m);
  for(int i=0;i<table.size();i++)
  {
    table[i].resize(n);
  }
 
  //looping through m lines of input
  string temp;
  for(int i=0;i<m;i++)
  {
    getline(cin,temp);
    //lowercasing all characters
    for(int j=0;j<n;j++)
    {
      table[i][j] = tolower(temp[j]);
    }
  }

  //now that we have the table, we get the words that 
  //we need to find

  cin >> k;

  
  int *x;
  for(int i=0;i<k;i++)
  {
    getline(cin,temp);
    cout << "searching for: " << temp << endl;
    x = search_table(temp);
    cout << x[0] << " " << x[1] << endl;
  }

  return 0;
}
