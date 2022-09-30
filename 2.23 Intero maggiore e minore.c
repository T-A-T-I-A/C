    //determina maggiore e minore tra tre interi
#include <stdio.h>

int main()
{
	int x, y, z; //dichiarazione di variabili

	printf("Inserishi tre interi:\n"); //prompt
	scanf("%d %d %d", &x, &y, &z);  // legge tre interi

	int max = x; //dichiarazione e assegnazione dei variabili
	//seleziona intero maggiore
	if (x < y) {
		max = y;
		if (y < z) {
			max = z;
		}
	}
	printf("Maggiore: %d\n", max); //stampa intero maggiore

	int small = z; //dichiarazione e assegnazione dei variabili
	// seleziona intero minore
	if (y < z) {
		small = y;
		if (x < y) {
			small = x;
		}
	}
	printf("Minore: %d\n", small); // stampa intero minore

}
    
