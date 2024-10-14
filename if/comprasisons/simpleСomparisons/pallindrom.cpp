#include <iostream>

using namespace std;

int main() {
  int n, left, right;
  cin >> n;
  
  left = n / 100;
  right = n % 100;

  if ((left % 10 == right / 10) && (left / 10 == right % 10)) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
