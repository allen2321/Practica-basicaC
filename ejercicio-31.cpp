#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
	int numero;
	do{
	
	cout<<"dijite un numero del 1-10\n";cin>>numero;
} while((numero<1) || (numero> 10));

	for(int i = 1; i<10000;i++){
		cout<<numero<<" * "<<i<< " = "<<numero*i<<endl;
	}
	
	
	return 0;
}
