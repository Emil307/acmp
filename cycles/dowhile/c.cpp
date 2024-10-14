#include <iostream>
      
using namespace std;
   
int main() {
    int a, count;
    double sum;
      
    sum = 0;
    count = -1;
      
    do {
      cin >> a;
          
      count++;
      sum = sum + a;  
    } while (a != 0);
    
    cout << sum / count;
      
    return 0;
}