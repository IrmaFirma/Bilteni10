//Napisi program koji ce rijesiti kvadratnu jednacinu. //
//Ucitane koeficijente jednacine a,b,c jednacine a*x^2+b*x+c=0.//
//Isipisati oba rjesenja kvadratne jednacine.//
//Napomena: Ukoliko su rjesenja imaginarna, ispisati oba rjesenja, i realni i imaginarni dio.a) Za uèitane koeficijente a=1, b=1 i c=-12, rješenja su x1=3 i x2=-4//
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float a,b,c,x1,x2,x1Re,x2Re,x1Im,x2Im,t,D;
	cout<<"Unesite koeficijente kvadratne jednacine a,b,c: ";
	cin>>a>>b>>c;
	D=b*b-4*a*c;
		if (D>0)
			{
				t=sqrt(D);
				x1=(-b+t)/(2*a);
				x2=(-b-t)/(2*a);
					cout<<"Rjesenja kvadratne jednacine su: "<<"x1="<<x1<<endl<<"x2="<<x2<<endl;
			}
		else if (D==0)
			{
				x1=(-b)/(2*a);
					cout<<"Rjesenja kvadratne jednacine su: "<<"x1=x2="<<x1<<endl;
				}
		else
		{
			t=sqrt(-D);
			x1Re=-b/(2*a);
			x2Re=x1Re;
			x1Im=t/(2*a);
			x2Im=-x1Im;
				cout<<"Rjesenja kvadratne jednacine su: "<<"x1Re="<<x1Re<<"x1Re="<<x1Im<<endl;
				cout<<"Rjesenja kvadratne jednacine su: "<<"x2Re="<<x2Re<<"x2Re="<<x2Im<<endl;
		}
		return 0;
}
