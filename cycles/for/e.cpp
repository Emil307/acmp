#include <iostream>

using namespace std;

int main() {
  int n, i, v, s, maxAge, oldest;

  maxAge = 0;
  oldest = -1;

  cin >> n;

  for (i = 1; i <= n; i++) {
    cin >> v >> s;

    if (s == 1 && v > maxAge) {
      maxAge = v;
      oldest = i;
    }
  }

  cout << oldest << endl;

  return 0;
}