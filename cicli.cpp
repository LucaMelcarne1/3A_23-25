#include <iostream>
using namespace std;
int main() {
	//DO - WHILE
	//esempio: controllo sull'input
	cout << "DO - WHILE: controllo input" <<endl;
	int n;
	do{
		cout<<"Inserisci un numero positivo: ";
		cin >>n;
		if (n<0){
			cout <<"Il numero inserito e' minore di 0"<<endl;
		}			
	}while(n<0);
	
	//while 
	//esempio: dividi un numero per 2 fino a quando è maggiore di 0 e stampa i risultati.
	int num1=8;
	cout <<endl<<endl <<"WHILE: dividi per 2 " <<endl;
	while(num1>0){
		num1/=2;
		cout << num1 <<" ";
	}
	
	//for 
	//esempio: stampa i numeri da 2 a 10;
	cout <<endl<<endl <<"FOR: stampa i numeri da 2 a 10" <<endl;
	for (int i=2;i<11;i++){
		cout << i <<" ";
	}
    return 0;
}
