#include <iostream>

using namespace std;

int main() {
  int n, k, a, b, c;
  cin >> n >> k;

  a = k / n;
  b = k % n;
  c = (n - b) % n;

  cout << a << " " << b << " " << c << endl;

  return 0;
}