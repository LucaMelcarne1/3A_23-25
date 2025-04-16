#include <iostream>
using namespace std;
int main() {
	int eta,giorno;
	cout<<"Quanti anni hai? ";
	cin >>eta;
	
	//if indica una condizione (V o F)--> se si verifica esegue le istruzioni presenti dopo la {
	if(eta>=18){
		cout<< "Sei maggiorenne";
	}else{ //arrivato qui vuol dire che la condizione eta>18 è falsa.
		cout<< "Sei minorenne";
	}
	cout <<endl;
	
	cout<<"Scrivi il giorno della settimana in numeri: ";
	cin >>giorno;
	
	switch (giorno) { //fa il controllo sull'input di giorno
  	case 1:
    	cout << "Lunedi'";
    break;
    case 2:
    	cout << "Martedi'";
    break;
  	case 3:
    	cout << "Mercoledi'";
    break;
  	case 4:
    	cout << "Giovedi'";
    break;
  	case 5:
    	cout << "Venerdi'";
    break;
  	case 6:
    	cout << "Sabato";
    break;
  	case 7:
    	cout << "Domenica";
    break;
    default: //caso in cui non si verifica nessuna delle condizioni precedenti.
    	cout <<"Numero sbagliato!";
  }
	


    return 0;
}
