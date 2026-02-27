#include <iostream>
using namespace std;

main()
{
  float mb, kb, bytes, bits;
  cout << "Enter the size of Megabytes (MB): ";
  cin >> mb;
  kb = mb * 1024.0;
  bytes = kb * 1024.0;
  bits = bytes * 8.0;
  cout << mb << " MB is equivalent to " << bits << " bits";

}

