/Napisi program kojim ce se unijeti prirodan broj manji od 32726. //
// Izracunati zbir neparnih cifara tog broja koje su vece od 4.//
#include <iostream>
using namespace std;
int main ()
{
	int i,n,s=0,j,d,h,k,l,t,p,f;
	cout<<"Unesite broj: ";
	cin>>n;
	j=n%10;
		t=n/10;
	d=t%10;
		p=t/10;
	s=p%10;
		f=p/10;
	h=f%10;
		k=f/10;
	l=k%10;
	
	for (i=5;i<10;i+=2)
	{
		if (i==j or i==d or i==s or i==h or i==l)
		cout<<i<<endl;
	}
	s+=i;
	cout<<"Zbite neparnih cifara broja "<<n<<" je: "<<s<<endl;
	return 0;
}
