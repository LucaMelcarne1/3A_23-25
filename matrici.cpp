#include <iostream>
using namespace std;
int main() {
	int n=3; //dimensione della matrice
	//dichiarazione e inizializzazione di una matrice
	string mat1[2][4] = {
  		{ "A", "B", "C", "D" },
		{ "E", "F", "G", "H" }
	};
	
	//dichiarazione di una matrice quadrata nXn
	int mat2[n][n];
	
	//riempimento matrice
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout <<"RIGA "<<i << " COLONNA " <<j<< ": ";
			cin >>mat2[i][j];
		}
	}
		
	//esempio di manipolazione degli elementi sommo 1 a ogni singolo elemento
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			mat2[i][j]+=1;
		}
	}
	
	//stampa matrice
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout <<mat2[i][j]<< " ";
		}
		//fine stampa riga: va a capo
		cout <<endl;
	}
    return 0;
}
