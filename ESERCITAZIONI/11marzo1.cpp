#include <iostream>

using namespace std;
#define N 5
int main()
{
 	//dichiarazione e riempimento degli array
	string nomi[N]={"Antonio","Lucia","Maria","Anna","Marco"};
	double voti[N]={5.5,6,9,7.5,6};

	//stampa di tutti gli elementi
    for (int i=0;i<N;i++){
    	cout << nomi[i]<<" " <<voti[i] <<endl;
	}
	
	//Stampa il nome dell’alunno con il voto più alto.
	int max=0,indice;
	for (int i=0;i<N;i++){
    	if (voti[i]>max)
    	{
			max=voti [i];
    		indice=i;
		}		
	}
	cout << "ALUNNO VOTO ALTO: " <<nomi[indice]<< endl;
	
	//Stampa la media dei voti
	int somma=0;
	for (int i=0;i<N;i++){
    	somma= somma + voti[i];
	}
	double media=(double)somma/(double)N;
	cout << "MEDIA= "<< media<<endl;
	
	//Stampa il nome dell’alunno con il voto più basso con il relativo voto
	int min=11,indice1;
	for (int i=0;i<N;i++){
    	if (voti[i]<min)
    	{
			min=voti [i];
    		indice1=i;
		}		
	}
	cout << "ALUNNO VOTO BASSO: " <<nomi[indice]<<voti[indice1]<< endl;
    return 0;
}
