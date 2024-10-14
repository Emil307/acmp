#include <iostream>

using namespace std;

int main() {
  int n, i, weight, min, max;

  min = 30000;
  max = -1;

  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> weight;

    if (weight < min) {
      min = weight;
    }

    if (weight > max) {
      max = weight;
    } 
  }

  cout << min << " " << max;

  return 0;
}