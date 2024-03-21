//Napisi program za rjesavanje kvadratne jednacine ax^2+bx+c. Ulazni podaci se ucitavaju sa tastature i to su koeficijenti jednacine a, b i c.//
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float a,b,c,x1,x2;
	cout<<"Unesite keoficijente kvadratne jednacine"<<endl;
	cout<<"a= ";
	cin>>a;
	cout<<"b= ";
	cin>>b;
	cout<<"c= ";
	cin>>c;
	
	
			x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
			x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
			
			
	cout<<"X1= "<<x1<<endl;
	cout<<"X2= "<<x2<<endl;
	return 0;
}

