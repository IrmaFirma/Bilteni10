#include <iostream>
using namespace std;
int main ()
{
	double x,y,max;
		cout<<"Unesite brojeve x i y: ";
		cin>>x>>y;
	if (x>y)
		cout<<"max="<<x<<endl<<"min="<<y<<endl;
	else if (y>x)
		cout<<"max="<<y<<endl<<"min="<<x<<endl;
	if (x==y)
		cout<<"Brojevi su jednaki"<<endl;
	return 0;
}

