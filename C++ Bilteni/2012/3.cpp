//Napisi program koji pronalazi posljednje dvije cifre broja 2^n za n<32726. Broj n se ucitava sa tastature.//
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()

{
int r,i,n;
cout<<"unesi potenciju broja 2 na n"<<endl;
cin>>n;
r=1;
for(i=1;i<=n;i++)
r=(2*r)%100;

cout<<r<<endl;


}

