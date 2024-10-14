#include <iostream>

using namespace std;

int main() {
  int x;

  double a, b, c, d, left;

  cin >> a >> b >> c >> d;

  for (x = -100; x <= 100; x++) {
    left = a*x*x*x + b*x*x + c*x + d;

    if (left == 0) {
      cout << x << " ";
    }
  }

  return 0;
}
