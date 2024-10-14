#include <iostream>

using namespace std;

int main() {
  int n, binar;

  binar = 1;

  cin >> n;

  while (binar < n) {
    binar *= 2;
  }

  if (binar == n) {
    cout << "YES";
  }

  if (binar > n) {
    cout << "NO";
  }

  return 0;
}
