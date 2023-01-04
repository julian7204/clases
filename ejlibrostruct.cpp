#include <iostream>
#define lib 30
using namespace std;
typedef char datos[50];

struct bibliotecastruct 
{
	datos titulo;
	datos autor;
	datos editorial;
	int anio;
	datos isbn;
	int numpag;
};

bibliotecastruct biblioteca[lib];

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

void leerlibro(bibliotecastruct datoslib[],int limit){
	for (int i=0;i<limit;i++)
	{
	cin.ignore();
	cout<<"Ingrese el titulo: ";
	gets(datoslib[i].titulo);
	cout<<"ingrese el autor: ";
	gets(datoslib[i].autor);
	cout<<"ingrese editorial: ";
	gets(datoslib[i].editorial);
	cout<<"ingrese el anio de publicacion: ";
	cin>>datoslib[i].anio;
	cin.ignore();
	cout<<"ingrese el ISBN: ";
	gets(datoslib[i].isbn);
	cout<<"ingrese el numero de paginas: ";
	cin>>datoslib[i].numpag;
	}
}

void implibros(bibliotecastruct libros[],int lim){
	for (int i=0;i<lim;i++)
	{
	cin.ignore();
	cout<<"titulo: ";
	puts(libros[i].titulo);
	cout<<"autor: ";
	puts(libros[i].autor);
	cout<<"editorial: ";
	puts(libros[i].editorial);
	cout<<"anio de publicacion: ";
	cout<<libros[i].anio;
	cout<<"\nisbn: ";
	puts(libros[i].isbn);
	cout<<"numero de paginas: ";
	cout<<libros[i].numpag;
	}
}

void busqueda(bibliotecastruct libros[],datos libusq, int lim){
int i=0;
int op;
bool enc=false;
do {
	if (strcmp(libros[i].isbn, libusq)==0){
	enc=true;
	}
	i++;
}while ((strcmp(libros[i].isbn, libusq)!=0)	|| (i<lim));
if (enc==false){
	cout<<"El libro no se encuentra en la libreria. ";
	}else{
		op=leern("Que dato desea cambiar del libro: \n1. Titulo\n2. Autor\n3. Editorial\n4. Anio de Publicacion\n5. ISBN\n6. Numero de Paginas.\nIngrese una opcion: ",0,6);
		switch (op){
			case 1:{
				cout<<"Ingrese el nuevo titulo del libro: ";
				gets(libros[i].titulo);
				break;
			}
			case 2:{
				cout<<"Ingrese el nuevo autor del libro: ";
				gets(libros[i].autor);
				break;
			}
			case 3:{
				cout<<"Ingrese la nueva editorial: ";
				gets(libros[i].editorial);
				break;
			}
			case 4:{
				cout<<"ingrese nuevo anio de publicacion: ";
				cin>>libros[i].anio;
				break;
			}
			case 5:{
				cout<<"ingrese el nuevo isbn: ";
				gets(libros[i].isbn);
				break;
			}
			case 6:{
				cout<<"ingrese el nuevo numero de pags: ";
				cin>>libros[i].numpag;
				break;
			}
		}	
	}	
}


void menu(bibliotecastruct bib[],int lim)
{
	datos libusq;
	int op=leern("---MENU---\n1. Cambiar un dato de un libro.\n2. Imprimir un reporte de todos los libros: ",0,2);
	do{
		switch (op){
			case 1:{
				cin.ignore();
				cout<<"Ingrese el isbn del libro a buscar. ";
				gets(libusq);
				busqueda(bib,libusq,lim);
				break;
			}
			case 2:{
				implibros(bib,lim);
				break;
			}
			case 3:{
				cout<<"Muchas gracias. ";
				break;
			}
		}
	}while (op!=3);
}

int main(){
	int lim= leern("Ingrese el numero de libros a leer: ",0,lib);
	leerlibro(biblioteca,lim);
	menu(biblioteca,lim);
}