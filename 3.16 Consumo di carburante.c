/* I guidatori sono interessati al consumo effettuato dalle loro automobili. Un guidatore ha tenuto traccia dei vari pieni di carburante, registrando le miglia percorse 
e i galloni consumati a ogni pieno. Realizzate un programma che richieda di inserire le miglia percorse e i galloni consumati a ogni pieno. Il programma deve calcolare
e stampare le miglia per gallone percorse per ogni pieno. Dopo aver processato tutte le informazioni di input, il programma deve calcollare e stampare le miglia complessive
per gallone percorse per tutti i pieni. Ecco un dialogo di input/output di esempio:
    Enter the gallons used (-1 to end): 12.8
    Enter the miles driven: 287
    The miles/gallons for this tank was 22.421875
    
    Enter the gallons used (-1 to end): 10.3
    Enter the miles driven: 200
    The miles/gallons for this tank was 19.417475
    
    Enter the gallons used (-1 to end): 5
    Enter the miles driven: 120
    The miles/gallons for this tank was 24.000000
    
    Enter the gallons used (-1 to end): -1
    
    The overall average miles/gallon was 21.601423
    
    //calcola consumo di carboidrante
#include <stdio.h>

int main()
{
	unsigned int miles;
	float gallons;
	unsigned int totalMiles = 0;
	float totalGallons = 0;
	float average;
	double totalAverage = 0;

	printf("%s", "Enter the gallons used(-1 to end): ");
	scanf("%f", &gallons);
	printf("%s", "Enter the miles driver: ");
	scanf("%u", &miles);

	while (gallons != -1) {
		totalGallons += gallons;
		totalMiles += miles;
		average = miles / (float)gallons;
		printf("The miles/gallons for this tank was %.6f\n", average);
		totalAverage = totalMiles / (float)totalGallons;

		puts("");


			printf("%s", "Enter the gallons used (-1 to end): ");
			scanf("%f", &gallons);
			if (gallons == -1) {
				printf("the overall average miles/gallons was: %.6f\n", totalAverage);
			}
			else {
				printf("%s", "Enter the miles driver: ");
				scanf("%u", &miles);
			}
	}
}
    
    
