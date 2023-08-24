#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int opcion, num;
	float numero, cubo;
	
	cout<<"\t.:Menu:."<<endl;
	cout<<"1. cubo de un numro"<<endl;
	cout<<"2. numero par o impar"<<endl;
	cout<<"3. salir"<<endl;
	cout<<"Opcion: ";cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"Dijita el numero que quieres elevar al cuadrado\n";cin>>numero;
	    cubo = pow(numero, 3);
	    cout<<"\nEl cubo del numero es: "<<cubo;break;
	    case 2: cout<<"Dijita el numero que quieras saber si es par o impar\n";cin>>num;
	    if(num%2==0){
	    	cout<<"El numero es par";
	    }else{
	    cout<<"El numero es impar";
	    }
		case 3:break;
		
		
	}
	
	
	
	
	
	
	
	return 0;
}
