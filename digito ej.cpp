#include <iostream>
using namespace std;

bool caracter(char n)
{
	if ((n=='0') ||(n=='1') ||(n=='2') ||(n=='3') ||(n=='4') ||(n=='5') ||(n=='6') ||(n=='7') ||(n=='8') ||(n=='9'))
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main ()
{
	char n;
	bool s;
	cout<<"ingrese char"<<endl;
	cin>>n;
	
	s=caracter(n);
	if (s==true)
	{
		cout<<"es un solo digito"<<endl;
	}
	else
	{
		cout<<"no es un digito"<<endl;
	}
	
}