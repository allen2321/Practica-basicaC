#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
	int temperatura, mayor, menor = 999;
	float suma_total, promedio = 0;
	for(int i = 0; i < 24; i+=4){
		cout<<"dijita la temperatura de la hora "<<i<<":  ";cin>>temperatura;
		
		suma_total += temperatura;
		
		if(temperatura > mayor){
			mayor = temperatura;
		}
		else if(temperatura < menor){
			menor = temperatura;
		}
	}
	
	promedio = suma_total/6;
	
	cout<<"Temperatura promedio: "<<promedio<<endl;
	cout<<"Temperatura mas alta: "<<mayor<<endl;
	cout<<"Temperatura mas baja; "<<menor<<endl;
	
	getch();
	return 0;
}
