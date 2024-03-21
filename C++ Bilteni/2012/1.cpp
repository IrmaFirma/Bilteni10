//Napisati program pomocu kojeg ce se unijeti koordinate tacake a(x,y,z) u trodimenzijalnom koordinatnom sistemu. //
//Izracunati udaljenost tacke A od koordinatnog pocetka O(0,0,0).//
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float x1,x2,y1,y2,z1,z2,d;
	x2=0;
	y2=0;
	z2=0;
	cout<<"Unesite koordinate tacke A: ";
	cin>>x1>>y1>>z1;
	d=sqrt((x1-x2)+(y1-y2)+(z1-z2));
	
	cout<<"Udaljenost tacke A od koordinatnog pocetka O(0,0,0) je: "<<d<<endl;
	return 0;
}
