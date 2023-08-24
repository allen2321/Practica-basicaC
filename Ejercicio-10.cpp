#include<iostream>

using namespace std;

int main(){
	float nota_practica, nota_teorica, nota_participacion , calificacion = 0;
	
	
	cout<<"Introduce la nota 1\n";cin>>nota_practica;
	cout<<"Introduce la nota 2\n";cin>>nota_teorica;
	cout<<"Introduce la nota 3\n";cin>>nota_participacion;
	
	nota_teorica =  nota_teorica * 0.60;
    nota_practica = nota_practica * 0.30;
    nota_participacion = nota_participacion * 0.10;
	
	calificacion = nota_practica + nota_teorica + nota_participacion;
	
	cout.precision(3); 
	cout<<"La media ponderada es igual a\n"<<calificacion<<endl;
	
	
	
	
	
	return 0;
};
