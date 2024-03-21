//Napisati program kojim ce se unijeti prirodni broj n<10000.//
//Ispisati sve palindromicne proste brojeve u intervalu [n,2*n].//
//Napomena palindromicni prosti brojevi su oni koji imaju za djelioce samo dva broja i to broj 1 i samog sebe, a citaju se i sa lijeva i sa desna isto.//
#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int isodd(int x){
	int counter = 0;
	for(int i = 2; i < x; i++){
		if(x % i == 0){
			counter++;
		}
	}
	if(counter == 0){
		return x;
	}else{
		return 0;
	}
	
}

int main(){
	int unos;
	cout << "Unesi broj: ";
	cin >> unos;
	for(int i = unos; i <= 2*unos; i++){
		if(isodd(i) != 0){
			if(i>0 && i<10){
				cout << i << endl;	
			}
			if(i>=10 && i <100){
				if(i%10 == i/10){
					cout << i << endl;
				}
			}
			if(i>=100 && i <1000){
				if(i%10 == i / 100)
					cout << i << endl;
			}
			if(i>=1000 && i <10000){
				if(i % 10 == i / 1000){
					if(i % 100 == i / 100){
						 cout << i << endl;
					}
				}
			}else if(i > 10000){
				cout << "Prevelik broj ! " << endl;
				break;
			}
		}	
	}
	system("PAUSE");
}
