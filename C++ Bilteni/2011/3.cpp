//Napisi program za izracunavanje duzine puta koji muha preleti u slucaju da leti od jednog do drugog bicikliste. Biciklista A iz tacke A ide prema tacki B. //
//Biciklista B ide iz tacke B prema A. Muha krece zajedno sa biciklistom A prema biciklisti B. Kada dodje do bicikliste B vraca se prema biciklisti A i tako sve dok se bicikliste ne sretnu.//
// Muha leti brže i od A i od B bicikliste. Ulazni podaci: brzine bicikliste A, B i muhe Va, Vb i Vm se unose u [km/h], kao i rastoja je tacaka u [km]. Brzine su konstantne. //
//Brzine i rastojanje su cijeli brojevi.//
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main ()
{
	float Va,Vb,Vm,d,s;
	cout<<"Unesite brzinu bicikliste A."<<endl;
	cout<<"Va= ";
	cin>>Va;
	cout<<"Unesite brzinu bicikliste B."<<endl;
	cout<<"Vb= ";
	cin>>Vb;
	cout<<"Unesite brzinu muhe."<<endl;
	cout<<"Vm= ";
	cin>>Vm;
	cout<<"Rastojanje od tacke A do tacke B."<<endl;
	cout<<"d= ";
	cin>>d;
	
	s=(Vm*d)/(Va+Vb);
	
	cout<<"Predjeni put je: ";
	cout<<"s= "<<s<<"km"<<endl;
	
	system ("pause");
	return 0;
}
