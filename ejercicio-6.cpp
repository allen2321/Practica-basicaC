#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, total = 0;
	
    cout<<"Introduce el valor de a\n";cin>>a;
    cout<<"Introduce el valor de b\n";cin>>b;
    cout<<"Introduce el valor de c\n";cin>>c;
    cout<<"Introduce el valor de d\n";cin>>d;
    cout<<"Introduce el valor de e\n";cin>>e;
    cout<<"Introduce el valor de f\n";cin>>f;
    
    total = (a + (b/c) ) / (d + (e/f));
    
    cout.precision(4);
    cout<<"El resultado de la ecuacion es\n"<<total<<endl;
    
	
	
	
	
	
	
	return 0;
}
