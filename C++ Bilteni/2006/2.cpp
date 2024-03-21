//Napisati program za nalazenje i ispis svih prostih brojeva u zadanom intervalu.//Gornja i donja granica intervala se unose sa tastature. 
#include <iostream>
using namespace std;
int main ()
{
	int d,g,i;
	cout<<"Unesite donju granicu: ";
	cin>>d;
	cout<<"Unesite gornju granicu: ";
	cin>>g;
	
	for (i=d;i<=g;i++)
	{
		if (i%1==0 && i%i==0 && i%2!=0 && i%3!=0 && i%5!=0)
		cout<<i<<" ";
	}
	return 0;
}

