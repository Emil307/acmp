#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a * b == c) {
      cout << "YES";
    }
    if (a * b != c) {
      cout << "NO";
    }

    return 0;
}
