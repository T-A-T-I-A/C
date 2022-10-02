    //modello di scacchiera di asterischi
#include <stdio.h>

//La funzione main inizia l'esecuzione
int main()
{
	unsigned int x = 1; //inizializza x

	while (x <= 8) { // ripeti otto volte
		unsigned int y = 1; //inizializza y
		if (x % 2 == 0) { 
			printf(" "); //se contatore si divide per 2 stampa lo spazio
		}
		while (y <= 8) { //ripeti otto volte
			printf("* "); //stampa nella stessa riga
			++y; //incrementa y
		}

		++x; //incrementa x
		puts(""); //inizia una nuova riga di output
	}
}
