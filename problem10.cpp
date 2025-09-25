#include <iostream>
using namespace std;
int main() {
    float s, e, p;
    cin >> s >> e >> p;
    float g=s/e;
    float cost=g*p;
    cout <<"The cost of driving is " <<cost<< endl;
    return 0;
}
