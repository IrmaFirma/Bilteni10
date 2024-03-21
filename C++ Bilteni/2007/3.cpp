//Napisati program kojim ce se ucitati (x1,y1) koordinate prvog kruga, (x2,y2) koordinate drugog kruga, koordinate neke tacke (x3,y3), poluprecnik prvog kruga d1 i poluprecnik drugog kruga d.//
//Odrediti polozaj tacke koordinat (X3,Y3) u odnosu na krugove , tj. da li tacka lezi van krugova,u samo prvom ili samo drugom krugu ili u njihovom presjeku ili u dodirnoj tacki.//
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()

{
	
	int x1,x2,x3,y1,y2,y3,d1,d2,r1,r2;
	cout<<"Unesite koordinatu x i y";
	cin>>x1>>y1;
	
	cout<<"Unesite kordinate centra drugog kruga x2 i y2";
	cin>>x2>>y2;
	
	cout<<"Unesite koordinatu x3 i y3";
	cin>>x3>>y3;
	
	cout<<"Unesite polupcenik prvo kruga d1 i d2:"<<endl;
	cin>>d1>>d2;
	
	r1=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	r2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	
	
	if(d1>=d2 && d2>=r2)
	cout<<"Tacka lezi unutar presjeka krugova"<<endl;

	else if(d1>=r1 && d2<r2)
	cout<<"Tacka lezi u prvom kurug"<<endl;
	
	else if(d1<r1 && d2>=r2)
	cout<<"Tacka lezi u drugolm krugu"<<endl;
	
	else
	cout<<"Tacka lezi van krugova"<<endl;

	system("PAUSE");
	return 0;
}
