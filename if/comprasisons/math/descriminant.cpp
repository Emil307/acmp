#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
      
int main() {
    double a, b, c, d;

    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) {
      cout << -1;
      return 0;
    }

    if (a == 0 && b != 0 && c != 0) {
      cout << 1 << endl;
      cout << fixed << setprecision(6) << -c / b << endl;
      return 0;
    }

    if (a == 0 && b == 0 && c != 0) {
      cout << 0 << endl;
      return 0;
    }

    if (a == 0 && b != 0 && c == 0) {
      cout << 1 << endl;
      cout << 0 << endl;
      return 0;
    }

    if (a != 0 && b == 0 && c == 0) {
      cout << 1 << endl;
      cout << 0 << endl;
      return 0;
    }

    if (a != 0 && b != 0 && c == 0) {
      cout << 2 << endl;
      cout << 0 << endl;
      cout << fixed << setprecision(6) << -b / a << endl;
      return 0;
    }

    if (a != 0 && b == 0 && c != 0) {
      if (c < 0 && a > 0) {
        cout << 2 << endl;
        cout << fixed << setprecision(6) << sqrt(abs(c) / a) << endl;
        cout << fixed << setprecision(6) << -sqrt(abs(c) / a) << endl;
        return 0;
      }
      if (c > 0 && a < 0) {
        cout << 2 << endl;
        cout << fixed << setprecision(6) << sqrt(c / abs(a)) << endl;
        cout << fixed << setprecision(6) << -sqrt(c / abs(a)) << endl;
        return 0;
      }
      cout << 0 << endl;
      return 0;
    }

    if (a != 0 && b != 0 && c != 0) {
      d = b * b - 4 * a * c;

      if (d < 0) {
        cout << 0 << endl;;
        return 0;
      }

      if (d == 0) {
        cout << 1 << endl;
        cout << fixed << setprecision(6) << -b / (2 * a) << endl;
        return 0;
      }

      if (d > 0) {
        cout << 2 << endl;
        cout << fixed << setprecision(6) << (-b + sqrt(d)) / (2 * a) << endl;
        cout << fixed << setprecision(6) << (-b - sqrt(d)) / (2 * a) << endl;
        return 0;
      }
    }

    return 0;
}
