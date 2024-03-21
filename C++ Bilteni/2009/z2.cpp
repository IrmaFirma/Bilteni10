//Napisati program za ucitavanje dva prirodna broja koji su gornja i donja granica intervala. //
//Izracunati i ispisati sumu koju sacinjavaju kvadrati parnih brojeva i kubovi neparnih brojeva iz pomenutog intervala, ukljucujuci i njegove granice. //
//Maksimalna gornja granica je 1000. // Test primjer: n=2 i m=6, suma je 208
#include <iostream>
using namespace std;
int main ()
{
	int a,b,s,p,n,i;
	cout<<"Unesite donju granicu"<<endl;
	cout<<"a=";
	cin>>a;
	upis:cout<<"Unesite gornju granicu"<<endl;
	cout<<"*Maksimalna gornja granica je 1000*"<<endl;
	cout<<"b=";
	cin>>b;
		if (b>1000)
		goto upis;
		s=0;
		p=0;
		n=0;
				for (i=a;i<=b;i++)
				{
					if (i%2==0)
					p=i*i+p;
					else if (i%2!=0)
					n=i*i*i+n;
					s=p+n;
				}
			cout<<"Suma je "<<s<<endl;
	return 0;
	
}

