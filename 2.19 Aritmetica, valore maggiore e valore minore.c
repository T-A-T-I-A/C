    //calcola somma, media, prodotto, minore e maggiore
#include <stdio.h>

int main()
{
	int x, y, z; //dichiarazioni di variabili

	printf("Inserisci tre numeri interi:\n"); //prompt
	scanf("%d %d %d", &x, &y, &z); //legge tre interi

	int sum = x + y + z; //assenia valore
	printf("Somma: %d\n", sum); //stampa la somma

	int average = (x + y + z) / 3; //assenia valore
	printf("Media: %d\n", average); //stampa la media

	int product = x * y * z;  // assenia valore
	printf("Prodotto: %d\n", product); //stampa il prodotto

	int small = x;  //asseniare variabile a minore
	//seleziona minore
	if(y < x) {
		small = y;
	}
	if (z < x) {
		small = z;
	}
	printf("Minore: %d\n", small); //stampa minore

	int max = z; //assegna variabile a maggiore
	//seleziona maggiore
	if (x > z) {
		max = x;
	}
	if (y > z) {
		max = y;
	}
	printf("Maggiore: %d", max); //stampa maggiore

	return 0;
} //termina la funzione main
    
