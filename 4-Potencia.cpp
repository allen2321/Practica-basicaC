#include<iostream>
#include<Math.h>
using namespace std;

int main(){
	int a, b, c, general = 0;
	
	cout<<"Inserta el valor de a: ";cin>>a;
	cout<<"Inserta el valor de b: ";cin>>b;
	cout<<"Inserta el valor de c: ";cin>>c;
	
	general = -b + sqrt(pow(b,2) -4 * a * c) / 2*a;
	
	
	cout<<"\nl El resultado es: "<<general<<endl;
	return 0;
}
