#include <bits/stdc++.h>

using namespace std;

int main()
{
  //defualt constrcutor intiialized all bits 0
  bitset<5> bset1;

  //initializing with bits of 20
  bitset<5> bset2(20);

  //initializing with bits specified by string
  bitset<5> bset3(string("11111"));

  cout << "bset1: " << bset1 << endl;
  cout << "bset2: " << bset2 << endl;
  cout << "bset3: " << bset3 << endl;

  
  bset1[0] = 1;

  cout << endl << "changed bit 0 to 1 of bset1" << endl;
  cout << "bset1: " << bset1 << endl;
  
  cout << "size of bset1: " << bset1.size() << endl;

  cout << endl << "testing if bit 0 of bset1 is set: " << bset1.test(1) << endl;

  cout << endl << "testing if atleast one bit in bitset 1 is on: " << bset1.any() << endl;

  cout << endl << "testing if no bits are on it bitset 1: " << bset1.none() << endl;

  cout << endl << "setting all of the bits in bset1" << endl;
  bset1.set();

  cout << "flipping the 0th bit of bset1" << endl;
  bset1.set(0,0);

  cout << "\nbset1: " << bset1 << endl;

  cout << "resetting all bits of bset1" << endl;
  bset1.reset();

  bset1.set();

  bset1.reset(0);

  cout << "bset1: " << bset1 << endl;
  
  cout << "flipping the last bit: " << endl;
  bset1.flip(bset1.size()-1);
  cout << bset1 << endl;
  return 0;
}
