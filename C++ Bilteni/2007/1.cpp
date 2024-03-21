//Napisi program za diobu bakterija. Ulazni podaci koji se ucitavaju su pocetni broj bakterija, diobni faktor kojim se bakterije dijele i gornja granica broja bakterija.//
//Vrijeme dijeljenja bakterija u jednoj generaciji je jedna sat. Nakon koliko sati ce se diobom bakterija prvi put premašiti gornja granica broja bakterija.//

#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int broj,faktor,gornja;
	cout << "Unesi pocetni broj bakterija: " << endl;
	cin >> broj;
	cout << "Unesi diobni faktor bakterija: " << endl;
	cin >> faktor;
	cout << "Unesi gornju granicu bakterija: "<< endl;
	cin >> gornja;
	int counter = 0;
	for(int i = broj; i <= gornja;){
		i = i * faktor;
		counter++; 	
	}
	cout << counter << endl;
	system("PAUSE");
}
