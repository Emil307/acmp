#include <iostream>

using namespace std;

int main() {
  int n, i, j, road, roads;

  roads = 0;

  cin >> n;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cin >> road;

      roads += road;
    }
  }

  roads = roads / 2;

  cout << roads << endl;

  return 0;
}
