#include <iostream>
using namespace std;

//prototipo di funzione
void stampaInt(int[], int);
void stampaStr(string[], int);

int main() {
	int n=5;
	int array1[n]={4,3,15,33,90};
	string array2[n]={"Anna","Marco","Alba","Maria","Antonio"};
	int array3[n]={5,4,3,13,2};
	
	
	stampaInt(array1,n);
	cout <<endl;
	stampaInt(array3,n);
	cout <<endl;
	stampaStr(array2,n);
	cout <<endl;
    return 0;
}
//stampa un array di interi
void stampaInt(int array[],int n){
	for(int i=0;i<n;i++){
		cout <<array[i]<<" ";
	}
}
//stampa un array di interi
void stampaStr(string array[],int n){
	for(int i=0;i<n;i++){
		cout <<array[i]<<" ";
	}
}
