//Napisi program za izracunavanje rastojanja dvije tacke u trodimenzionalnom koordinatnom sistemu.//
//Ulazni podaci koji se ucitavaju sa tastature su koordinate tacaka T1(x1,y1,z1) i T2(x2,y2,z2)//
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float x1,x2,y1,y2,z1,z2,d;
	cout<<"Unesite tacku T1"<<endl<<"x1=";
	cin>>x1;
	cout<<"y1=";
	cin>>y1;
	cout<<"z1=";
	cin>>z1;
	cout<<"Unesite tacku T2"<<endl<<"x2=";
	cin>>x2;
	cout<<"y2=";
	cin>>y2;
	cout<<"z2=";
	cin>>z2;
	
		d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
	
	cout<<"Rastojeanje izmedju dvije tacke T1 i T2 je: "<<d<<endl;
	return 0;
	
}
