#include <iostream>
using namespace std;

int main (){
	
	int n;
	
	cout<<"--Ingrese que bebida desea--"<<endl;
	cout<<"Coca-Cola---agua---Sprite---jugo---leche"<<endl;
	cout<<"     1        2       3       4       5  "<<endl;
	cin>>n;
	
	switch (n){
		
		case 1: cout<<"eligio Coca-Cola"; break;
		case 2: cout<<"eligio Agua"; break;
		case 3: cout<<"eligio Sprite"; break;
		case 4: cout<<"eligio jugo"; break;
		case 5: cout<<"eligio leche"; break;
		default:
		cout<<"Error la eleccion no fue valida"<<endl; break;
		
	}	
	
	
}