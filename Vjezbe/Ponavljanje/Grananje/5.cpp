#include <iostream>
using namespace std;

int main() {
    int x, y(0);
    cout << "Unesite broj x!\n";
    cin >> x;

    if(x > 0) {
        y = x + 3;
        cout << "y: " << y;
    } else if(x == 0) {
        y = 2;
        cout << "y: " << y;
    } else {
        y = x - 3;
        cout << "y: " << y;
    }
    return 0;
}
/*
Napisati program koji racuna x po formuli:
    { x + 3, x > 0
y = { 2,     x = 0
    { x - 3, x < 0
*/