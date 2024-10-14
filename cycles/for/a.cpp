#include <iostream>

using namespace std;

int main() {
  int n, i, coin, zeroes, ones;

  zeroes = 0;
  ones = 0;

  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> coin;

    if (coin == 0) {
      zeroes = zeroes + 1;
    }

    if (coin == 1) {
      ones = ones + 1;
    }
  }

  if (ones < zeroes) {
    cout << ones;
  }

  if (zeroes <= ones) {
    cout << zeroes;
  }

  return 0;
}
