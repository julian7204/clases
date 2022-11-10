/* Entrada:int cedula
   Salida: msj cadena	
   Proceso: -leer y verificar cedula
   -
*/


#include <iostream>
using namespace std;

int main()

{
	int cedula, res, total=0, contador = 0, suma = 0;
	
do {
	

	cout<<"ingresa la cedula"<<endl;
	cin>>cedula;
	do {
		
		res = cedula%10;
		
		cedula = cedula/10;
		contador++;
		
		if (contador%2 == 0) {
			
			res = res * 2;
			
			if (res/10 != 0) {
				
				res = res - 9;
				
			};
			
			suma = suma + res;
			
			
		}
		
		else {
			
			suma = suma + res;
			
		};
		
	
		
	}while(cedula > 0);
	
	
	
	if (suma%10 == 0) {
		
		cout<<"CORRECTO NANOM"<<endl;

	}
	
	else {
		
		cout<<"CEDULA MALA :("<<endl;
	}
	
	
}while (cedula < 0 || cedula > 100000000);

}