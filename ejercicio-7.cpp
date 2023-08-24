#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, total = 0;
	
	cout<<"Introduce el valor de a\n";cin>>a;
	cout<<"Introduce el valor de b\n";cin>>b;
	cout<<"Introduce el valor de c\n";cin>>c;
	cout<<"Introduce el valor de d\n";cin>>d;
	
	total = a + (b/(c-d));
	
	cout.precision(4)
	cout<<"el total es\n"<<total<<endl;
	
	
	return 0;
}
