#include<iostream>

using namespace std;

int main(){
	int x, y, aux;

cout<<"Introduce el valor de x\n";cin>>x;
cout<<"Introduce el valor de y\n";cin>>y;

 aux = x;
 y = x;
 y = aux;


	cout<<"El nuevo valor de x es\n"<<x<<endl;
	cout<<"El nuevo valor de y es\n"<<y<<endl;
	
	
	
	return 0;
}
