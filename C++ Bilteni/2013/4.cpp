//Napisati program koji ispisuje koji je redni broj dana u godini na osnovu unesenog datuma u formi dan, mjesec i godina.//
#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int mjeseci [12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int dani,i;
	int godina,mjesec;
	 int rezultat=0;
	cout<<"unesite dan"<<endl;
	cin>>dani;
	cout<<"unesite mjesec"<<endl;
	cin>>mjesec;
	cout<<"godinu"<<endl;
	cin>>godina;
	if (godina%4==0){
		mjeseci[2]={29}; 
	}
	rezultat=dani;
	if (mjesec!=1){
	
	for (i=0;i<(mjesec-1);i++){
		
		rezultat=mjeseci[i]+rezultat;
		
		
	}
	cout<<rezultat<<endl;}
	else if (mjesec==1){
	
	cout<<rezultat<<endl;}

	
	
	
	return 0;
}
