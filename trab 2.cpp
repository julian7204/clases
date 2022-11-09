#include <iostream>
using namespace std;

int main () {
	
	int n,cont;
	cont=0;
	cout<<"ingrese numero"<<endl;
	cin>>n;
	
	while (n>0)	{
		
		n=n/10;
		cont=cont+1;
	}
	
	cout<<"tus caracteres son:"<<cont<<endl;
}