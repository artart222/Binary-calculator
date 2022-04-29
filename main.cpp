#include <iostream>
#include <string>

#include "./bin.h"

using namespace std;

int main() {
  Bin a1(3, "int"), a2(23, "int");

  // a1 + a2;
  cout << a1.get_value() << endl;
  return 0;
}