//Napisi program koji unosi hipotenuzu c [cm] trougla ABC. Stranice trougla su cijeli brojevi. Ispisati njegove katete a i b, ako je trougao pravougli ili poruku da trougao nije pravougli. //
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"Unesite hipotenuzu."<<endl;
	cout<<"c= ";
	cin>>c;
	
	for (a=1;a<=c;a++)
	for (b=a+1;b<=c;b++)
	if (c*c==a*a+b*b)
		cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
		goto upis;
	if (c*c!=a*a+b*b)
		cout<<"Trougao nije pravougli."<<endl;

	upis:system ("pause");
	return 0;
}
