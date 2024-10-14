#include <iostream>
  
using namespace std;
  
int main() {
    int first, second, third,mx,mn; 

    cin >> first >> second >> third;

    if (first < second) { 
      mn = first;
    } else mn = second;
    if (third < mn) mn = third;
    if (first > second) {
      mx = first;
    } else mx=second;
    if (third > mx) {
      mx = third;
    }
    
    cout << mx - mn;
    
    return 0;
}