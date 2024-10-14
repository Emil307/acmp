#include <iostream>

using namespace std;

int main() {
  int n, start;

  start = 1;

  cin >> n;

  while (start * start <= n) {
    cout << start * start << " ";

    start = start + 1;
  }
  
  return 0;  
}
