#include <iostream>
using namespace std;

#define max 50

typedef char datos[50];


struct facultad_struct{
	datos codf;
	datos nomf;
};

struct prof_struct{
	datos codp;
	datos nomp;
	double salariop;
	datos codfp;
};

facultad_struct fac[max];
prof_struct prof[max];

int leern(string msj,int limitem, int limite)
{
	int n;
	do
	{
		cout<<msj<<endl;
		cin>>n;
	} while ((n<limitem) || (n>limite));
	return n;
}

void leerstructf(facultad_struct fac[],int limit){
	cin.ignore();
	for (int i=0;i<limit;i++){
		int j=i;
		cout<<"ingrese el codigo de la facultad: ";
		gets(fac[i].codf);	
		do{
			if(strcmp(fac[i].codf,fac[j-1].codf)==0){
				cout<<"Ingrese un codigo de facultad no ingresado ya: ";
				gets(fac[i].codf);
			}	
			j--;
		}while (j>0);
		j=i;
		cout<<"ingrese el nombre de la facultad: ";
		gets(fac[i].nomf);
		do{
			if(strcmp(fac[i].nomf ,fac[j-1].nomf )==0){
				cout<<"Ingrese un nombre de facultad no ingresado ya: ";
				gets(fac[i].nomf);
			}
			j--;
		}while (j>0);
	}	
}

void leerstructp(facultad_struct fac[], prof_struct prof[],int limit, int cont){
	cin.ignore();
	cout<<"Ingrese el codigo de la facultad del profesor: ";
	gets(prof[cont].codfp);
	if(strcmp(fac[cont].codf, prof[cont].codfp)==0){
		cout<<"ingrese el codigo del profesor: ";
		gets(prof[cont].codp);
		int j=cont;
		do{
			if(strcmp(prof[cont].codp,prof[j-1].codp)==0){
				cout<<"Ingrese un codigo de facultad no ingresado ya: ";
				gets(prof[cont].codp);
				j--;
			}	
		}while (j>0);
		cout<<"ingrese el nombre del profesor: ";
		gets(prof[cont].nomp);
		cout<<"ingrese el salario del profesor: ";
		cin>>prof[cont].salariop;
		}
	else cout<<"Esa facultad es inexistente. ";
	cont++;	
}

void mostrar_fac(facultad_struct fac[],int limit){
	cout<<"Facultad    Codigo\n";
	for (int i=0;i<limit;i++){
		cin.ignore();
		cout<<fac[i].nomf<<"     "<<fac[i].codf<<"\n";
	}
}

void mostrar_prof (prof_struct prof[],int cont)
{
	cout<<"Profesor     Codigo     Salario     Codigo Facultad\n";
	for (int i=0;i<cont;i++){
		cin.ignore();
		puts(prof[i].nomp);
		cout<<"     ";
		puts(prof[i].codp);
		cout<<"     ";
		cout<<prof[i].salariop;
		cout<<"     ";
		puts(prof[i].codfp);
	}
}

void menu(prof_struct prof[],facultad_struct fac[])
{
	int op;
	do
	{
		
		op=leern("---MENU---\n1. Leer num de Facultades\n2. Leer Facultades\n3. Leer profesores por facultad\n4. Mostrar Facultades\n5. Mostrar Profesores\n6. Salir\nIngrese una Opcion: ",1,6);
		switch (op)
		{
			int numf;
			int cont;
			case 1:{
				numf=leern("Ingrese numero de facultades",0,1000);
				break;
			}
			case 2:{
				leerstructf(fac,numf); 
				break;
			}
			case 3:{
				cont=0;
				leerstructp(fac,prof,numf,cont);
				break;
			}
			case 4:{
				mostrar_fac(fac,numf);
				break;
			}
			case 5:{
				mostrar_prof(prof,cont);
				break;
			}
			case 6:{
				cout<<"Muitas gracais :)";
				break;
			}
			
			default:{
				cout<<"opcion inexistente";
				break;
			}
		}
	} while (op!=6);
}
int main(){
	menu(prof,fac);
}


