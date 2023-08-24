#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float precio, iva, total = 0, aumento = 0;
	
	cout<<"introduce el precio del preducto: "; cin>>precio;
	cout<<"introduce el iva: "; cin>>iva;
	iva = iva / 100;
	aumento = precio * iva;
	total = aumento + precio;
	
	cout<<"\nEl precio total es:"<<total<<endl;
	
	
	
	
	return 0;
}
