#include<iostream>

using namespace std;

int main(){
	float a, b, total;
	
	cout<<"Introduce el valor de a: ";cin>>a;
	cout<<"Introduce el valor de b: ";cin>>b;
	
	total = (a/b) + 1;
	
	
	cout.precision(2);
	cout<<"El resultado final es\n"<<total<<endl;
	
	
	
	
	
	return 0;
}
