// Napisi program koji ce sabrati dva razlomka ucitana u obliku a/b+c/d ili m(a/b)+n(c/d). Ispid treba biti treci razlomak f/g, mjesoviti broj e(f/g) ili cijeli broj h ako je to rjesenje.//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,d,w,r,v,l,p;
	cout<<"Unesite prvi razlomak"<<endl;
	cout<<"Brojnik: ";
	cin>>a;
	cout<<"Nazivnik: ";
	cin>>b;
	cout<<"Unesite drugi razlomak"<<endl;
	cout<<"Brojnik: ";
	cin>>c;
	cout<<"Nazivnik: ";
	cin>>d;
	
	if (a==b && c==d)
	{
		cout<<"Zbir dva razlomka je 2"<<endl;
	}
	else if (b==0 or d==0)
	{
		cout<<"Nema rjesenja."<<endl;
	}
	else if (b==1 && d==1)
	{
		cout<<"Rjesenje je: "<<a+c<<endl;
	}
	else if (a==c && b==d)
	{
		while (a!=b)
{
if (a>b) a-=b;
if (b>a) b-=a;
}
		cout<<"Rjesenje je: "<<"Brojnik="<<a/b<<" "<<"Nazivnik="<<b/b<<endl;
		r=a/b;
		v=b/b;
		{
			if (r==v)
			cout<<"Rjesenj je: 1"<<endl;
		}
	}
	else if(b==d && (a+c)>=b)
	{
		w=a+c;
		while (w!=b)
{
if (w>b) w-=b;
if (b>w) b-=w;
}
	cout<<"Rjesenje je: "<<"Brojnik="<<w/b<<" "<<"Nazivnik="<<b/b<<endl;
	{
		if (w/b==b/b)
		cout<<"Rjesenje je: 1"<<endl;
	}
	}
	else if(b==d && (a+c)<b)
	{l=a+c;
		while (l!=b)
{
	
if (l>b) l-=b;
if (b>l) b-=l;  // b=b-l //
}
cout<<"Brojnik= "<<l/b<<" "<<"Nazivnik= "<<d/b<<endl;
	}
	return 0;
}
