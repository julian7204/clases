//notas .cepecito
#include <iostream>
using namespace std;

//autores: Julian y Roberto
bool rango(int valor, int bajo, int alto) {
	
	if (valor >= bajo && valor <= alto) {
		
		return true;
		
	}
	
	else {
	
		return false;
	
	};


}

int main() {
	
	float nota, cd=0, cr=0, cb=0, cmb=0, cs=0;
	
	cout<<"Ingrese el numero de estudiantes:\n";
	
	int numes;
	cin>>numes;
	
	for (int i = 0; i <= numes; i++) {
	
	
		cout<<"Ingrese la nota del estudiante:\n";
		
		cin>>nota;
	
	
		if(rango(nota, 0, 9)) {
			
			cd++;
			
		}
		
		else if(rango(nota, 10, 13)) {
			
			cr++;
		
		}
		
		else if(rango(nota, 14, 16)) {
			
			cb++;
		}
		
		else if(rango(nota, 17, 18)) {
			
			cmb++;
		}
		
		else if (rango(nota, 19, 20)) {
			
			cs++;
			
		}
		
		else {
			
			cout<<"Nota fuera de rango";
			
		}
	
	
	};
	
	
	cout<<"Los porcentajes:\n";
	
	cout<<"Deficiente: "<<(cd/numes)*100<<"%"<<endl;
	
	cout<<"Regular: "<<(cr/numes)*100<<"%"<<endl;
	
	cout<<"Buena: "<<(cb/numes)*100<<"%"<<endl;
	
	cout<<"Muy buena: "<<(cmb/numes)*100<<"%"<<endl;
	
	cout<<"Sobresaliente: "<<(cs/numes)*100<<"%"<<endl;
	
	
	
	
}
