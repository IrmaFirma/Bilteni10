//Napisati program kojim se unosi k cjelobrojnih clanova jednodimenzionalnog niza. Ako je suma svih ucitanih clanova parna, ispisati najveci ucitani clan.//
//Ako je suma neparna, ispisati najmanji ucitani clan.//
#include <iostream>
#include <algorithm>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(){
	int brojbroj;
	cout << "Unesi broj brojeva: ";
	cin >> brojbroj;
	int broj[brojbroj];
	for(int i = 0; i < brojbroj; i++){
		cout << "Unesi " << i + 1 <<"." << "broj: ";
		cin >> broj[i];
	}
	int zbir = 0;
	for(int e = 0; e < brojbroj; e++){
		zbir = zbir + broj[e];
	}
	sort(broj,broj+brojbroj);
	cout << "Zbir je: " << zbir << endl;
	if(zbir % 2 == 0 ){
		cout << "Najveci clan je: ";
		cout << broj[brojbroj-1] << endl;
	}
	if(zbir % 2 != 0){
		cout << "Najmanji clan je: ";
		cout << broj[0] << endl;
	}
	system("PAUSE");
}
