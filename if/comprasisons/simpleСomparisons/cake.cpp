#include <iostream>

using namespace std;

int main() {
  int guests;
  cin >> guests;
  
  if (guests % 2 == 0) {
    cout << guests / 2 << endl;
  } else if (guests == 1) {
    cout << 0;
  } else {
    cout << guests;
  }

  return 0;
}