#include<iostream>

using namespace std;

int main(){
	
	int lista[] =  {1, 6, 6, 4, 3, 8, 9, 5, 4,6};
	
	int limite = sizeof(lista) / sizeof(lista[0]);
	
	
	for (int i = 0; i< limite; i++){
		if (lista[i] %2 == 0){
			cout<< lista[i] << endl;
		}
		
		
	}
	
	
	
	
	
	
	return 0;
}
