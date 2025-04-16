#include <iostream>
using namespace std;

//prototipo di funzione
void stampa(string, int);

int main() {
	//inserisci nome ed età di 3 alunni e stampa con le funzioni
	string nomeAlunno="Mario"; //valore di default
	int etaAlunno=0; //valore di default
	cout <<"VALORI DI DEFAULT"<<endl;
	stampa(nomeAlunno,etaAlunno); //stampa valori default
	cout<<endl<<endl<<"VALORI DA CONSOLE"<<endl;
	cout <<"NOME: ";
	cin>>nomeAlunno;
	cout <<"ETA: ";
	cin>>etaAlunno;
	stampa(nomeAlunno,etaAlunno); //stampa valori console
    return 0;
}

void stampa(string nome, int eta){
	cout <<"ALUNNO: " <<nome<<" ETA': "<<eta;
}
