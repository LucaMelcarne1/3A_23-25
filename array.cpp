#include <iostream>
using namespace std;
int main() {
	int n=5; //dimensione dell'array
	//dichiarazione di un array
	int array1[n];
	//dichiarazione e inizializzazione di un array
	int array2[4]={1,3,5,7};
	
	//riempimento array
	for (int i=0;i<n;i++){
		cout <<"Inserisci l'elemento con posizione "<<i <<": " ;
		cin >>array1[i];
	}
		
	//esempio di manipolazione degli elementi sommo 1 a ogni singolo elemento
	for (int i=0;i<n;i++){
		array1[i]+=1;
	}
	
	//stampa array
	for (int i=0;i<n;i++){
		cout <<array1[i]<<" "; 
	}
    return 0;
}
