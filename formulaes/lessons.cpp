#include <iostream>

using namespace std;

int main() {
  int count;

  cin >> count;

  int lessons = 45 * count;
  int rests = (count - 1) / 2 * 20 + (count - 1) % 2 * 5;

  int hours = 9 + (lessons + rests) / 60;
  int minutes = (lessons + rests) % 60;

  cout << hours << " " << minutes << endl;

  return 0;
}
