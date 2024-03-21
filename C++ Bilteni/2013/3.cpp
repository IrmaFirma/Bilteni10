//Napisati program kojim se za prirodne brojeve n i k (n i k<1000) izracunava izraz //
//r=1/sqrt(k)*1/(sqrt(k+sqrt(k)))*1/(sqrt(k+(sqrt(k+sqrt(k)))))*.....*1/(sqrt(k+sqrt(k+....+sqrt(k))))//
// Ispisani rezultat mora biti tacan na 3 decimsle //
#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(){
	float k;
	int n;
	cout << "Unesi k: ";
	cin >> k;
	cout << "Unesi n: ";
	cin >> n;
	
	float rezultat = 1;
	float ka = 0;
	for(int e = 1; e <= n;e++){
		for(int i = 1; i <= e;i++){
			ka = ka + sqrt(k);
		}
		rezultat = rezultat * 1/ka;
	}
	cout << rezultat << endl;
}
