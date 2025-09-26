#include <iostream>
using namespace std;
int main() {
    int speed;
    cin >> speed;
    if (speed < 20)
        cout << "too slow" << endl;
    if (speed > 80)
        cout << "too fast" << endl;
    if (speed >= 20 && speed <= 80)
        cout << "just right" << endl;
    return 0;
}
