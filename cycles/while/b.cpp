#include <iostream>
    
using namespace std;
    
int main() {
    int n, d, a;

    d = 1;
    a = 2;

    cin >> n;

    while (d == 1) {
        if (n % a == 0) {
          d = a;
        }
        a += 1;
    }
    
    cout << d;  

    return 0;
}