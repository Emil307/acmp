#include <iostream>
     
using namespace std;
  
int main() {
  int a, maxi;

  maxi = 0;
 
  do {
    cin >> a;

    if (a > maxi) {
      maxi = a;
    }
  } while (a != 0);
     
  cout << maxi;
  return 0;
}
