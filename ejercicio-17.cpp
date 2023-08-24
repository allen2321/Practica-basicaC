#include<iostream>

using namespace std;

int main(){
	int dato1, dato2, dato3;
	
	cout<<"Igresa 3 numeros\n";cin>>dato1>>dato2>>dato3;

if((dato1 > dato2) && (dato1 > dato3)){
	cout<<"el dato mayor es\n"<<dato1;
  } else if((dato2 > dato1) && (dato2 > dato3)){
   	cout<<"el dato mayor es\n"<<dato2;
   }else if((dato3 > dato1 && dato3 > dato2)){
   	cout<<"el dato mayor es\n"<<dato3;
   }else{
   	cout<<"Los 3 numeros son iguales";
   }
   
   return 0;
}

	
	
	
	

