#include <iostream>
   
using namespace std;
   
int main() {
    int x1, y1, x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    if (((x1 % 2 == y1 % 2) && (x2 % 2== y2 % 2)) ||  ((x1 % 2 != y1 % 2) && (x2 % 2 != y2 % 2))) { 
      cout << "YES"; 
    } else {
      cout << "NO";
    }   
     
    return 0;
}