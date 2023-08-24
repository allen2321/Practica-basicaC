#include<iostream>


using namespace std;


int main(){
	int numero, unidades, decenas, sentenas, millar;
	cout<<"ingresa el valor que quieras convertir";cin>>numero;
	
	unidades = numero%10; numero/= 10;
	decenas = numero%10; numero/= 10;
	sentenas = numero%10; numero/=10;
	millar = numero%10; numero/=10;
	
	
	switch(millar){
	case 1: cout<<"M";break;
	case 2: cout<<"MM";break;
	case 3: cout<<"MMM";break;
	};
	
	switch(sentenas){
	case 1: cout<<"C";break;
	case 2: cout<<"CC";break;
	case 3: cout<<"CCC";break;
	case 4: cout<<"CD";break;
	case 5: cout<<"D";break;
	case 6: cout<<"DC";break;
	case 7: cout<<"DCC";break;
	case 8: cout<<"DCCC";break;
	case 9: cout<<"CM";break;
	};
		switch(unidades){
	case 1: cout<<"I";break;
	case 2: cout<<"II";break;
	case 3: cout<<"III";break;
	case 4: cout<<"IV";break;
	case 5: cout<<"V";break;
	case 6: cout<<"VI";break;
	case 7: cout<<"VII";break;
	case 8: cout<<"VIII";break;
	case 9: cout<<"IX";break;
	};
	
	
	
	
	
	
	
	
	
	
	return 0;
}
