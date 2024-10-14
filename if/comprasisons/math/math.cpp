#include <iostream>
 
using namespace std;
      
int main() {
    int a, b, c;

    cin >> a >> b >> c;
  
    if (a != 0) {
      cout << a;
    } else if ((b == 0) && (c == 0)){
      cout << 0;
    }

    if (((a != 0) && (b > 0)) || ((a != 0) && (b == 0) && (c > 0))) {
      cout << "+";
    }

    if (b != 0) {
      if (b == 1) {
        cout << "x";
      }

      if (b == -1) {
        cout << "-" << "x";
      }

      if (b > 1) {
        cout << b << "x";
      }

      if (b < -1) {
        cout << b << "x";
      }
    }

    if ((c > 0) && (c != 0) && (b != 0)) {
      cout << "+";
    }

    if (c != 0) {
      if (c == 1) {
        cout << "y";
      }

      if (c == -1) {
        cout << "-" << "y";
      }

      if (c > 1) {
        cout << c << "y";
      }

      if (c < -1) {
        cout << c << "y";
      }
    }

    return 0;
}
