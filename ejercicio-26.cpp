#include<iostream>

using namespace std;


int main(){
	int saldo_inicial = 1000, opc;
	float extra, retiro = 0, saldo,transferencia;
	
	cout<<"\tBienvenido a su cajero automatico"<<endl;
	cout<<"1. ingresa dinero en tu cuenta"<<endl;
	cout<<"2. retira dinero de tu cuenta"<<endl;
	cout<<"3. mandar dinero a otra cuenta"<<endl;
	cout<<"4. salir"<<endl;
	cout<<"opcion: ";cin>>opc;
	
	switch(opc){
		case 1: cout<<"Dijite la cantidad que quiera ingresar: ";cin>>extra;
		saldo = saldo_inicial + extra;
		cout<<"El saldo de su cuenta es: "<<saldo;break;
		case 2: cout<<"Dijite la cantidad que quiera retirar: ";cin>>retiro;
		if(retiro > saldo_inicial){
			cout<<"NO tiene esa cantidad de dinero";
		}else{
			saldo = saldo_inicial - retiro;
			cout<<"El dinero en su cuenta: "<<saldo;break;
		}
		case 3:cout<<"dijite cuando dinero quiere transferir";cin>>transferencia;
		if(transferencia > saldo_inicial){
			cout<<"NO tienes el suficiente dinero";
		}else{
			saldo = saldo_inicial - transferencia;
			cout<<"su saldo restante es: "<<saldo;
		}
	}

	
	return 0;
}
