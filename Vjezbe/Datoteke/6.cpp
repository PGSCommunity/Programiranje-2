#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream broj("mojibrojevi.txt", ios::in);
    if(!broj) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        string str;
        while(getline(broj, str)) cout << str << '\n';
    }
    return 0;
}
/*
Napisati program koji pomoću klase „fstream“ i objekta iz datoteke cita podatke
*/