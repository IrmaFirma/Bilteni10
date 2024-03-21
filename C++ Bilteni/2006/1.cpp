//Napisati program za izracunavanje i ispis najveceg zajednickog djelioca (NZD) za dva prirodna broja koja se ucitavaju sa tastature.//
#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(){
	int broj1,broj2;
	cout << "Unesi prvi i drugi broj: ";
	cin >> broj1;
	cin >> broj2;
	int nzs;
	int proizod = broj1 * broj2;
	for(int i = 1; i <= proizod; i++){
		if(broj1 % i == 0 && broj2 % i ==0){
			nzs = i;
		}
	}
	cout << "NZD je: ";
	cout << nzs << endl;
	
	system("PAUSE");
	return 0;
}
