//Napisati program za unos tri prirodna broja a, b i x. //
//Provjeriti i ispisati na ekranu da li se broj x nalazi u intervalu [a,b] ili je u intervalu [1,a-1] ili u intervalu [b+1,32767]. //
//Interval [a,b] ukljucuje brojeve a i b. //
#include <iostream>
using namespace std;
int main ()
{
	int a,b,x;
	cout<<"Unesite brojeve"<<endl;
	cout<<"a= ";
	cin>>a;
	cout<<"b= ";
	cin>>b;
	cout<<"x= ";
	cin>>x;
		if (x>=a && x<=b)
		cout<<"x se nalazi u intervalu [a,b]"<<endl;
			else if (x<a && x<b)
			cout<<"x se nalazi u intervalu [1,a-1]"<<endl;
				else 
				cout<<"x se nalazi u intervalu [b+1,32767]"<<endl;
	return 0;
}
