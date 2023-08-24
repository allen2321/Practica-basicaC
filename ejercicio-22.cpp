#include<iostream>

using namespace std;

int main(){
	int num1,num2,num3,num4;
	cout<<"introduce 4 numeros\n";cin>>num1>>num2>>num3>>num4;
	
	
	if((num1 == num4) || (num2 == num4) || (num3 == num4)){
		cout<<"todos los numeros son iguales";
	}else if(num1 == num4){
		"El pimero congenia con el 4";
	}else if(num2 == num4){ 
	cout<<"El segundo congenia con el 4";
	}else if(num3 == num4){ 
	cout<<"El tercer congenia con el 4";
}else{
	cout<<"Ninguno es igual";
}
	
	
	
	
	
	
	return 0;
}
