#include <iostream>

using namespace std;

int main() {
  int n, square;

  square = 1;

  cin >> n;

  while (square <= n) {
    cout << square << " ";
    square *= 2;
  }

  return 0;
}