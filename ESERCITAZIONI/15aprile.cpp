#include <iostream>
using namespace std;

//data in input la retribuzione giornaliera, calcolare lo stipendio
//prototipo di funzione --> 2 parametri -stipendio (float) 
// giorni lavorati (int) e ci restituisce lo stipendio (float)
float calcolaStipendio(float, int);
int main(){
	float stip;
	stip= calcolaStipendio(51.23,30);
	cout<<stip;
	return 0;
}
//implementiamo la funzione
float calcolaStipendio(float prezzoGiorno, int giorni){
	float stipendio= prezzoGiorno*giorni;
	return stipendio;
}


