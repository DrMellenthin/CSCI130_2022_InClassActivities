#include <iostream>

using namespace std;

int main() {
  // initialize variables
  char ch1, ch2;
  int val;

  // prompt our user to type in "A 51"
  cout << "Type the following \"A 51\":";

  // read the values
  cin >> ch1 >> ch2 >> val;

  
  // show what was stored
  cout << "\nch1 = " << ch1 << endl;
  cout << "ch2 = " << ch2 << endl;
  cout << "val = " << val << endl;
}