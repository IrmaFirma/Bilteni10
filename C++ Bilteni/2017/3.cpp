//Rijesiti Diofantovu jednacinu oblika ax+bx=c za promjenjive x i y u intervalu x=[9..20] i y=[9..20]. Programom unijeti parametre a,b,c, te odrediti i ispisati cjelobrojna rjesenja x i y u pomenutom intervalu. // 
#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,x,y;
	cout<<"Unesite a: ";
	cin>>a;
	cout<<"Unesite b: ";
	cin>>b;
	cout<<"Unesite c: ";
	cin>>c;
		for (x=9;x<=20;x++)
		for (y=9;y<=20;y++)
		
		if (a*x+b*y==c)
	cout<<"Rjesenja su: "<<"x="<<x<<" "<<"y="<<y<<endl;
	
	return 0;
}
