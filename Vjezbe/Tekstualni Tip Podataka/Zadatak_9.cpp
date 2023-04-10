#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>

using namespace std;

int main() {
    _setmode(_fileno(stdout), 0x00020000);
    wcout << "Omega: " << L"\x03C9\n";
    wcout << "Beskonacno: " << L"\x221E\n";
    wcout << "Proizvod: " << L"\x041F";
    return 0;
}
/*
Napisati program koji ispisuje znakove:
omega (ꙍ) 
beskonačno (∞)
proizvod (П)
*/