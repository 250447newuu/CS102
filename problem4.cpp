#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a % b == 0)
        cout << a << " is divisible by " << b<<endl;
    if (a % b != 0)
        cout << a << " is not divisible by " << b<<endl;
    return 0;
}
