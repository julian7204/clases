#include <iostream>
#include <string>
using namespace std;

int leern(string msj)
{
	int n;
	do
	{
		cout<<msj<<endl;
		cin>>n;
	} while (n<0);
	
	return n;
}

void leer_nota(string msj, int n,float notas[])
{
	int i;
	for (i=0;i<n;i++)
	{
		do
		{
		cout<<msj<<endl;
		cin>>notas[i];
		if (notas[i]<0 && notas[i]>20)
		{
			cout<<"numero no aceptado"<<endl;
		}
		}while (notas[i]<0 && notas[i]>20);
	}
}

void leer_nombre(string msj,int n,string nombre[])
{
	int i;
	for (i=0;i<n;i++)
	{
		cout<<msj<<endl;
		cin>>nombre[i];
	}
}

void rango(int n,float notas[],int rango1,int rangofinal1, int rango2,int rangofinal2, int rango3,int rangofinal3, int rango4,int rangofinal4)
{
	
	int cont1=0,cont2=0,cont3=0,cont4=0;
	for (int i=0;i<n;i++)
	{
		if (notas[i]>=rango1 && notas[i]<=rangofinal1)
		{
			cont1++;
		}
		else if (notas[i]>=rango2 && notas[i]<=rangofinal2)
		{
			cont2++;
		}
		else if (notas[i]>=rango3 && notas[i]<=rangofinal3)
		{
			cont3++;
		}
		else if (notas[i]>=rango4 && notas[i]<=rangofinal4)
		{
			cont4++;
		};
	}
	
	cout<<"el valor del primer rango es: "<<cont1<<endl;
	cout<<"el valor del segundo rango es: "<<cont2<<endl;
	cout<<"el valor del tercer rango es: "<<cont3<<endl;
	cout<<"el valor del cuarto rango es: "<<cont4<<endl;
}

void moda(int n,float notas[])
{
	int cont=0,cont2=0;
	float moda;
	
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (notas[j]==notas[i])
			{
				cont++;
			}
		}
		
		if (cont>cont2)
		{
			moda=notas[i];
			cont2=cont;
		}
		cont=0;
	}
	
	cout<<"la moda es: "<<moda<<" y se repite: "<<cont2<<" veces"endl;
	
}

void promedio(int n,float notas[])
{
	float promedio,suma=0;
	for (int i=0;i<n;i++)
	{
		suma=suma+notas[i];
	}
	promedio=suma/n;
	
	cout<<"su promedio es: "<<promedio<<endl;
}

int main ()
{
	int n;
	
	n=leern("ingrese el numero de estudiantes: ");
	
	float notas[n];
	string nombre[n];
	
	
	leer_nombre("ingrese su nombre: ",n,nombre);
	leer_nota("ingrese su nota: ",n,notas);
	rango(n,notas,1,9,10,13,14,16,17,20);
	promedio(n,notas);
	moda(n,notas);
	
	
}







