#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z')
        cout << "Lowercase alphabet" << endl;
    if (c >= 'A' && c <= 'Z')
        cout << "Uppercase alphabet" << endl;
    if (!( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ))
        cout << "It is not an alphabet" << endl;
    return 0;
}
