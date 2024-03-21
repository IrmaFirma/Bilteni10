// Napisi program koji ce ispisati najveci neparni djelilac ucitanog parnog prirodnog broja. //
#include <iostream>
using namespace std;
int main ()
{
	int n,i;
	cout<<"Unesite parni broj: ";
	cin>>n;
	
		for (i=1;i<n;i=i+2)
	
			if (n%i==0)
			cout<<i<<endl;
		
	return 0;
}
