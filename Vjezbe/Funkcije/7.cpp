#include <iostream>
using namespace std;

int sestocifreni() {
    for(int i = 1000000; i <= 9999999; i++) {
        if(i % 3 == 0 && i % 5 != 0) {
            return i;
            break;
        }
    }
}

int main() {
    cout << sestocifreni();
    return 0;
}
/*
Napisati funkciju koja vraca najmanji sestocifreni broj koji je djeljiv sa 3 a nije djeljiv sa 5.
*/