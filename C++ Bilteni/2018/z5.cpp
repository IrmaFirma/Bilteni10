//Napisati program koji ce za uneseni prirodni broj 1<n<32767 i prirodni broj a manji od 20 ispisati a prvih prostih brojeva blizanaca vecih od ucitanog broja n.Testni primjer: za uneseni broj n=100 i a=4 ispis treba biti (101,103), (107,109), (137,139), (149,151)//
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int n,nx,nb,i,j,k,t,m,p,q;
	 	cout<<"Unesite broj kao pocetak: ";
	 	cin>>n;
	 	p=m;
	 	q=0;
	 	int p1,p2;
	 	cout<<"Unesite koliko parova blizanaca zelite? ";
	 	cin>>nx;
	 		for(k=1;k<=nx;k++)
	 		{
	 			for(i=n; i<35000;i++)
	 			{
	 				t=0;
	 				for (j=2;j<=sqrt(i);j++)
	 				{
	 					if (i%j==0)
	 					{
	 						t=1;
	 					}
	 				}
	 				m=0;
	 				for (j=2;j<=sqrt(i+2);j++)
	 				{
	 					if ((i+2)%j==0)
	 					{
	 						m=1;
	 					}
	 				}
	 				if((t==0)&& (m==0))
	 				{
	 					q++;
	 					cout<<q<<"."<<"par prostih blizanaca vecih od broja"<<p<<"je:"<<i<<" "<<i+2<<endl;
	 					n=i+2;
	 					break;
	 				
	 				}
	 			}
	 			
	 		}
	 		cin.get();
	 		cin.get();
	 		return 0;
}
