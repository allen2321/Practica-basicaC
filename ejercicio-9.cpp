#include<iostream>

using namespace std;

int main(){
	float Alumno1, Alumno2, Alumno3, Alumno4,Alumno5, total = 0;
	
	
	cout<<"Introduce la calificacion del alumno numero 1\n"; cin>>Alumno1;
	cout<<"Introduce la calificacion del alumno numero 2\n"; cin>>Alumno2;
	cout<<"Introduce la calificacion del alumno numero 3\n"; cin>>Alumno3;
	cout<<"Introduce la calificacion del alumno numero 4\n"; cin>>Alumno4;
    cout<<"Introduce la calificacion del alumno numero 5\n"; cin>>Alumno5;
	
	total = (Alumno1 + Alumno2 + Alumno3 + Alumno4 + Alumno5)/ 5;
	
	
	cout<<"El promedio de calificacion es\n"<<total<<endl;
	
	
	
	
	return 0;
}
