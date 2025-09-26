#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, y;
    cin >> x >> y;
    double distance = sqrt(x * x + y * y);
    if (distance <= 10)
        cout << "The point is inside the circle" << endl;
    if (distance > 10)
        cout << "The point is outside the circle" << endl;
    return 0;
}
