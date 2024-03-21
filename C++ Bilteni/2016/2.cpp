//Neka je n prirodan broj, i neka je n1 proizvod cifara broja n, n2 proizvod cifara broja n1, n3 proizvod cifara broja n2 itd.//
//Najmanji broj k za koji vrijedi da je nk jednocifren broj u teoriji brojeva nazva se multiplikativna otpornost broja n. //
// Napisi program koji racuna i ispisuje multiplikativnu otpornost unesenog broja. //
#include <iostream>

using namespace std;

int Rs(int n);

int main()
{
	int b,i=0,c1;
	cout<<"Unesi visecifreni broj:";
	cin>>b;
	
	if(b<10)i++;
	c1=b;
	
	while(b>9)
	{
		b=Rs(b);
		i++;
	}
	
	cout<<"Multiplikativna otpornost broja " << c1 << " je " <<i<<endl;
	return 0;
}
int Rs(int n)
{
	int c,P=1;
	while(n>0)
	{
		c=n%10;
		P=P*c;
		n=n/10;
	}
	return (P);
}

