//Ucitati prirodni broj. Naci i ispisati njegov najveci neparni djelilac.//
#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
int a,i,c;
int d=0;
cout<<"unesite paran broj"<<endl;
cin>>a;
for(i=1;i<=a;i++){
	if (a%i==0 and i%2!=0 and i>d){
d=i;
	}
	
	
	
}
	cout<<d;
	
	return 0;
}

