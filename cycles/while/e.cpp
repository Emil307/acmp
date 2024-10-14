#include <iostream>

using namespace std;

int main() {
  int a0, a1, a, n, i;
  
  a0 = 0;
  a1 = 1;
  i = 2;
    
  cin >> n;
  
  if (n == 0) {
    cout << a0;
  } 

  if (n > 0) {
    while (i <= n) {
      a = a0 + a1;
      a0 = a1;
      a1 = a;
      i += 1;
    }
      cout << a1;
   }
  return 0;
}
