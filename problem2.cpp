#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x >= 0)
        if (x % 2 == 0)
            cout << "The number is positive and even"<<endl;
        else
            cout << "The number is positive and odd"<<endl;
    if (x < 0)
        if (x % 2 == 0)
            cout << "The number is negative and even"<<endl;
        else
            cout << "The number is negative and odd";
    return 0;
}
