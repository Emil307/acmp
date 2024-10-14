#include <iostream>

using namespace std;

int main() {
  int n;
  int ost;

  cin >> n;

  cout << n / 10 + (n % 10 + 9) / 10 << endl;

  return 0;
}