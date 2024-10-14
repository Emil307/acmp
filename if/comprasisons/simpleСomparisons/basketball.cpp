#include <iostream>
  
using namespace std;
  
int main() {
    int a1, b1, a2, b2, a3, b3, a4, b4, awins, bwins;

    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;
    cin >> a4 >> b4;

    awins = a1 + a2 + a3 + a4;
    bwins = b1 + b2 + b3 + b4;

    if (awins > bwins) {
      cout << "1";
    }

    if (awins < bwins) {
      cout << "2";
    }

    if (awins == bwins) {
      cout << "DRAW";
    }

    return 0;
}
