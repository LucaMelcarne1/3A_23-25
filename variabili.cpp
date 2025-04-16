#include <iostream>
using namespace std;
int main() {
	//tipo di variabile e nome
	int eta =15;
	string nome="Anna";
	char sesso='F';
	//OUTPUT - STAMPA CONCATENATA
    cout <<"NOME= " << nome<< " ETA'= "<<eta<<" SESSO= " <<sesso <<endl;
    
    //INPUT 
    cout << "Inserisci il tuo nome: ";
    cin >>nome;
    cout << "Inserisci la tua eta': ";
    cin >>eta;
    cout << "Inserisci il tuo sesso: ";
    cin >>sesso;
    
    //OUTPUT - STAMPA CONCATENATA
    cout <<"NOME= " << nome<< " ETA'= "<<eta<<" SESSO= " <<sesso;
    return 0;
}
