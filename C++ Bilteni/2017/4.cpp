//Napisati program za izracunavanje faktorijala pprirodnog broja n, pri cemu je 1<= n <=100//
#include <iostream>
using namespace std;
int main ()
{
	int n,i,j=1;
	cout<<"Unesite n: ";
	cin>>n;
	for (i=1;i<=n;i++)
	j=j*i;
	cout<<"Rjesenje je: "<<j;


	return 0;
}
