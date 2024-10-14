#include <iostream>
 
using namespace std;
 
int main() {
    int n, left, right;

    cin >> n;

    left = n % 10;
    n = n / 10;
    left = left + n % 10;
    n = n / 10;
    left = left + n % 10;
    n = n / 10;
    right = n % 10;
    n = n / 10;

    right = right + n % 10;
    right = right + n / 10;

    if (left == right) {
      cout << "YES";
    }

    if (left != right) {
      cout << "NO";
    }

    return 0;
}