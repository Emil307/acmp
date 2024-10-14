#include <iostream>

using namespace std;

int main() {
  int garry;
  int larry;

  cin >> garry >> larry;

  int summ = garry + larry - 1;

  cout << summ - garry << " " << summ - larry << endl;

  return 0;
}