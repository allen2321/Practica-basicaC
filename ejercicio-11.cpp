#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a, b, hipotenusa;
	
    cout<<"introduce el valor de a\n";cin>>a;
    cout<<"introduce el valor de b\n";cin>>b;
    
    hipotenusa = sqrt(pow(a,2)+pow(b,2));
    
	cout.precision(4);
	cout<<"la hipotenusa es igual a\n"<<hipotenusa<<endl;
	
	
	
	
	
	return 0;
}
