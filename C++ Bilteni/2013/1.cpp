//Napraviti program koji izracunava y, za unesenu promjenjivu x (tipa real), po formuli: //
// y(x) = -10, ako je x<0//
// y(x) = 1000*x, ako je 0<=x<1//
// y(x) = 10*x, ako je 1<=x<=10//
// y(x) = x/10, ako je x>=10//
#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(){
	float x,y;
	cin >> x;
	if(x < 0)
		y = -10;
	if(x >= 0 & x < 1)
		y = 1000*x;
	if(x >= 1 && x < 10)
		y = 10*x;
	if(x >= 10)
		y = x / 10;
		
	cout << y << endl;
	system("PAUSE");
	return 0;
}
