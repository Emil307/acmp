#include <iostream>
   
using namespace std;
   
int main() {
    string cord;

    cin >> cord;

    if (cord.at(0) % 2 == cord.at(1) % 2) { 
      cout << "BLACK"; 
    } else {
      cout << "WHITE";
    }   
     
    return 0;
}