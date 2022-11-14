#include <iostream>
#include <string.h>
using namespace std;

int lectura (string msj, int r1, int r2 )
{
	cout<<msj<<endl;
	int num=0;
	do {
		cin>>num;
		if (num<r1 || num >r2){
			cout<<"escribe bien cholo"<<endl;
		}
	} while (num<r1 || num >r2);
	
	return num;
	
}
int main()
{
	int n;
	n=lectura("Hola nanon",10,20);
}
