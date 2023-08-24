#include<iostream>

using namespace std;

int main(){
	float a, b,c,d, total;
	
	cout<<"Introduce el valor de a: ";cin>>a;
	cout<<"Introduce el valor de b: ";cin>>b;
	cout<<"Introduce el valor de c: ";cin>>c;
	cout<<"Introduce el valor de d: ";cin>>d;
	
	total = (a+b) / (c+d);
	
	
	cout.precision(2);
	cout<<"El resultado final es\n"<<total<<endl;
	
	
	
	
	
	return 0;
}
