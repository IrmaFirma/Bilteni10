//Napisi program kojim se unosi jedna rijec kao string sa malim slovima engleske abecede. Ispisati koliko ima susjednih slova po engleskoj abecedi u ucitanoj rijeci.//
#include <cstdlib>
#include <iostream>
#include <string>
#include <locale>
#include <cmath>
 
using namespace std;
 
int main() {
    locale local;
    string rijec, rijec1; 
    int brojacSekvenci = 0; 
    cout << "Unesite rijec: ";
    getline(cin, rijec); 
    for (int i = 0; i < rijec.size(); i++)
        rijec1 += tolower(rijec[i], local); 
    for (int i = 0; i < rijec1.size(); i++) { 
        if (abs(rijec1[i] - rijec1[i + 1]) == 1) 
            brojacSekvenci++;                   
    }
    cout << "Unesena rijec: " << rijec << endl;
    cout << "Broj ponavljanja sekvenci:" << brojacSekvenci << endl;
 
    system("pause > null");
    return 0;
}
