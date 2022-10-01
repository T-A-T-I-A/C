    //calcolo delle commissioni sulle vendite
#include <stdio.h>

int main()
{
	float dollars, total;

	printf("%s", "Enter sales in dollars (-1 to end): "); //prompt chiede all'utente di inserire vendite lorde
	scanf("%f", &dollars); //legge il numero in virgola mobile
	
	//l'istruzione while inizia l'esecuzione
	while (dollars != -1) {
		total = dollars / 100 * 9 + 200; // assegna a total il 9% delle vendite piu' 200 dollari
		printf("salary is: %.2f\n\n", total); // stampa i guadagni di adetto

		printf("%s", "Enter sales in dollars (-1 to end): "); //prompt chiede all'utente di inserire vendite lorde
		scanf("%f", &dollars); //legge il numero in virgola mobile

	}

	return 0;
}
