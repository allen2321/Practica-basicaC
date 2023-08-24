#include<iostream>

using namespace std;


int main(){
	int edad;
	
	cout<<"Introduce la edad\n";cin>>edad;
	
	if((edad >= 18) && (edad <= 25)){
		cout<<"La edad esta entre 18-25";
	}else if(edad < 18){
		cout<<"es menor";
	}else{
		cout<<"es mayor";
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
