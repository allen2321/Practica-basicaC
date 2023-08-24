#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int numero, conteo = 0;

do{
    cout<<"dijite un numero\n";cin>>numero;
    
    if(numero>0){
    	conteo++;
    }
}while(numero !=0);

cout<<"\nEl numero de valores mayores a cero introduccidos es\n"<<conteo<<endl;
    
    
    getch();
    return 0;
}
