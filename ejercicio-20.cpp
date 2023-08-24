#include<iostream>

using namespace std;

int main(){
	int X, Y, Z, resultado;
	cout<<"Introduce el valor de X: ";cin>>X;
		cout<<"Introduce el valor de Y: ";cin>>Y;
			cout<<"Introduce el valor de Z: ";cin>>Z;
	if(X >= Y || X >= Z){
		cout<<"El valor mayor es X: "<<X<<endl;
	}else if(Y >= X || Y >= Z){
		cout<<"El valor mayor es y: "<<Y<<endl;
	}else if(Z >= X || Z >= Y){
		cout<<"El valor mayor es Z: "<<Z<<endl;
	}else{
		cout<<"Todos los numeros son iguales"<<endl;
	}


	return 0;
}
	 

	
	

