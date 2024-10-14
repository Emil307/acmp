#include <iostream>

using namespace std;

int main() {
  int x, p, years, goal;

  years = 0;

  cin >> x >> p >> goal;

  x = x * 100;
  goal = goal * 100;

  while (x < goal) {
    years++;
    x += x * p / 100;
  }

  cout << years;

  return 0;
}
