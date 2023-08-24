#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a,b,c, total1 = 0, total2 = 0;
	
	cout<<"introduce el valor de a\n";cin>>a;
	cout<<"introduce el valor de b\n";cin>>b;
	cout<<"introduce el valor de c\n";cin>>c;
	
	total1 = (-b+(sqrt(pow(b,2)-(4 * a * c)))) / (2*a);
	total2 = (-b-(sqrt(pow(b,2)-(4 * a * c)))) / (2*a);
	
	cout<<"El resultado es\n"<<total1<<endl;
	cout<<"El resultado es\n"<<total2<<endl;
	
	

	
	
	return 0;
}
