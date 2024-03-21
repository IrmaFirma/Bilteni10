//Napisati program kojim se upisuju brojevi x i y iz skupa cijelih brojeva ( od -30000 do 30000). //
//Ispisati maksimalnu i minimalnu vrijednost ucitanih brojeva. //
// Ukoliko su brojevi jednaki, samo ispisati da su oni jednaki. Testni primjeri: a)x=2 y=13 i b)x=20 i y=20//
#include <iostream>
using namespace std;
int main ()
{
	double x,y,max;
		cout<<"Unesite brojeve x i y: ";
		cin>>x>>y;
	if (x>y)
		cout<<"max="<<x<<endl<<"min="<<y<<endl;
	else if (y>x)
		cout<<"max="<<y<<endl<<"min="<<x<<endl;
	if (x==y)
		cout<<"Brojevi su jednaki"<<endl;
	return 0;
}
