#include <iostream>
using namespace std;
int main() {
    int students;
    cin >> students;
    int groups;
    cin >> groups;
    int first= students /groups;
    int last= students % groups;
    cout <<"In first group: "<< first << endl;
    cout <<"In last group: "<< last << endl;
    return 0;
}
