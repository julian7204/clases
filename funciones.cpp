#include <iostream>
#include <string>
using namespace std;




float fnmedia (float n1, float n2, float n3)
{
	float media=(n1+n2+n3)/3;
	return media;
}
void mostrar(string mensaje, int media)
{
	cout<<mensaje<<endl<<media<<endl;
}

int main ()
{
	float n1,n2,n3;
	cout<<"ingrese 3 digitos"<<endl;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	fnmedia(n1,n2,n3);
	mostrar("shebadom iscariote",fnmedia(n1,n2,n3));
	
}