#include<iostream>



using namespace std;

/*
*/
int main(){
	int num1, num2, suma = 0, resta = 0, mul = 0, divicion = 0;
	
	cout<<"Inserta el valor de Num1: "; cin>>num1; 
    cout<<"Inserta el valor de Num2: "; cin>>num2;
    
    suma = num1 + num2;
    mul = num1 * num2;
    resta = num1 - num2;
    divicion = num1 / num2;
    
    cout<<"\nlLa suma es: " <<suma<<endl;
    cout<<"\nlLa Resta es: " <<resta<<endl;
    cout<<"\nlLa Multuplicacion es: " <<mul<<endl;
    cout<<"\nlLa Division es: "<<divicion<<endl;
	
	return 0;
};
