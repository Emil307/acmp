#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
      
int main() {
    int x1, y1, x2, y2;
    double x;

    cin >> x1 >> y1 >> x2 >> y2;

    x = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    cout << fixed << setprecision(5) << x;

    return 0;
}