#include <iostream>
using namespace std;

//prototipo di funzione
int calcolaEta(int, int);

int main() {
	int anno=2025;
	int annoNascita;
	cout<< "Inserisci l'anno di nascita: ";
	cin>>annoNascita;
	int eta=calcolaEta(anno,annoNascita);
	cout <<eta;
    return 0;
}

int calcolaEta(int annoCorr, int aNascita){
	int eta;
	eta=annoCorr-aNascita;
	return eta;
}
