    //Calcolare la frequenza cardiaca normale
#include <stdio.h>

int main()
{
	int giorni, mesi, anni, giorniOggi, mesiOggi, anniOggi;

	printf("inserisci la data attuale(gg/mm/aa): \n");
	scanf("%d%d%d", &giorniOggi, &mesiOggi, &anniOggi);
	printf("inserisci la data di nascita(gg/mm/aa): \n");
	scanf("%d%d%d", &giorni, &mesi, &anni);

	int eta = anniOggi - anni;
	if (((giorni > giorniOggi) && (mesi > mesiOggi)) || ((giorni < giorniOggi) && (mesi > mesiOggi))) {
		eta = eta - 1;
	}
	int frequenzaMax = 220 - eta;
	float intervalloMin;
	float intervalloMax;
	intervalloMin = (float)frequenzaMax * .50;
	intervalloMax = (float)frequenzaMax * .80;

	printf("L'eta' della persona:\t%d\n", eta);
	printf("Massima frequanza cardiaca:\t%d\n", frequenzaMax);
	printf("Intervallo di frequenza cardiaca normale:\t%.0f-%.0f\n", intervalloMin, intervalloMax);

	return 0;
}
