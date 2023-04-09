#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Unesite recenicu!\n";
    getline(cin, str);
    cout << endl;

    string str1(str);
    str1.insert(0, "cao!");
    str1.append("pozdrav!!!!");
    cout << "Recenica sa pozdravnim porukama umetnuti na pocekat i kraj:\n";
    cout << str1;
    cout << endl << '\n';

    string str2(str);
    int br(0);
    for(int i = 0; i < str.size(); i++) {
        br++;
    }
    str2.insert(br/2, "PAUZA");
    cout << "Recenica sa umetnutom rijeci 'PAUZA' na sredini stringa:\n";
    cout << str2;
    cout << endl << '\n';

    string s(str);
    int poz = s.find_last_of(" ");
    int prethodniPoz = s.find_last_of(" ", poz - 1);
    string str3 = s.erase(prethodniPoz + 1, poz - prethodniPoz - 1);
    cout << "Recenica sa obrisanom predposljednjom rijeci:\n";
    cout << str3;
    cout << endl << '\n';

    string str4(str);
    for(int i = 0; i < str4.size(); i++) {
        if(str4[i] == 'd') str4[i] = '#';
    }
    cout << "Recenica sa svakim pojavljivanjem slova 'd' zamijenjen znakom '#':\n";
    cout << str4;
    cout << endl << '\n';

    string trazenaRijec;
    cout << "Unesite trazenu rijec!\n";
    getline(cin, trazenaRijec);
    int pozicija = str.find(trazenaRijec);
    if(pozicija == string::npos) cout << "Trazena rijec nije pronadjena u tekstu!\n";
    pozicija = str.find(trazenaRijec, pozicija + 1);
    if(pozicija == string::npos) {
        cout << "Trazena rijec se nepojavljuje dva puta.\n";
    }
    else {
        cout << "Druge pojavljivanje trazene rijeci je na poziciji: " << pozicija << '\n';
    }
    return 0;
}
/*
2.	Učitati niz znakova (string) pa ispisati:

-	Učitani string sa pozdravnim porukama na početku i kraju stringa
-	String sa umetnutom rijeci „PAUZA“ koja počinje od sredine stringa
-	Obrisati predposljednju riječ stringa
-	Zamijeniti savko pojavljivanje slova 'd' znakom '#'
-	Poziciju drugog pojavljivanja učitane riječi (pretpostavimo da se riječ u tekstu pojavljuje više puta)

*/