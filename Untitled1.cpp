#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x, y, total = 0;
	cout<<"ingresa el valor de x\n"; cin>>x;
	cout<<"ingresa el valor de y\n"; cin>>y;
	total = (sqrt(x)) / (pow(y,2) - 1);
	
	cout<<"El valor total de la ecuacion es\n"<<total<<endl;
	

	
	
	return 0;
}
