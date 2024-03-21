//Napisi program kojim se ucitava broj clanova niza i clanove tog niza iz skupa prirodnih brojeva.//
//Ucitani niz ispisati u obrnutom redoslijedu.Testni primjer: za uèitani niz od n=4 èlana: 5, 6, 9, 8, ispi treba biti 8, 9, 6, 5//
#include <iostream>
using namespace std;
int main ()
{
	int i,niz[10],n;
	cout<<"Ucitati duzinu niza ";
	cin>>n;
	for (i=0;i<n;i++){
	cout<<"Unesi clan niza: "<<"("<<i+1<<")=";
	cin>>niz[i];
	}
	cout<<"Obrnuti niz: "<<"\n";

	for (i=n-1;i>=0;i--)
	{
	cout<<"Clan niza: "<<"("<<n--<<"}="<<niz[i]<<"\n";
}
	return 0;
}
