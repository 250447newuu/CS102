#include <iostream>
using namespace std;
int main() {
    int a = 13;
    char b = 'R';
    float n = float(a)/3;
    cout << n << " ";
    int dec_val = int(b);
    cout << dec_val << " ";
    float ab = a+dec_val;
    cout << ab/5 << " ";
    int result = (a/10 - 1) + dec_val;
    cout << char(result);
    return 0;
}