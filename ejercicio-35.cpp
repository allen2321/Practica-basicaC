#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	int numero, suma = 0;
	
	do{
		cout<<"introduce un numero";cin>>numero;
		
		if(numero>0){
			suma += numero;
		}
	}while((numero < 20) || (numero > 30) &&(numero!=0));
	
	
	cout<<"la suma de los numeros es:\n"<<suma<<endl;
	system("pause");
	return 0;
}
