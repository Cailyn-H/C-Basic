#include <iostream>

using namespace std;

int main() {
  int x = 5;
  int y = 3;
  
  // returns false (0) because ! (not) is used to reverse the result
  cout << (!(x > 3 && x < 10)); 

  return 0;
}