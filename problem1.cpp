#include <iostream>
using namespace std;
int main() {
    int intnumber = 25;
    float floatnumber = 3.14159;
    double doublenumber = 45.1234;
    bool boolin = true;
    char u = 'A';
    cout << "Number of students are: " << intnumber << endl;
    cout << "Size of intnumber: " << sizeof(intnumber) << endl;
    cout << "Float number is: " << floatnumber << endl;
    cout << "Size of floatnumber: " << sizeof(floatnumber) << endl;
    cout << "Double number is: " << doublenumber << endl;
    cout << "Size of doublenumber: " << sizeof(doublenumber) << endl;
    cout << "Boolin is: " << boolin << endl;
    cout << "Size of boolin: " << sizeof(boolin) << endl;
    cout << "Char is: " << u << endl;
    cout << "Size of char is: " << sizeof(u) << endl;

    return 0;
}