#include <iostream>
   
using namespace std;
   
int main() {
    int x1, y1, x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    if ((x1 == x2) && ((y1 == 2 && y2 == 4) || (y2 - y1 == 1)) && (y1 != 1)) { 
      cout << "YES"; 
    } else {
      cout << "NO";
    }   
     
    return 0;
}