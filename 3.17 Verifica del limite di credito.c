/* Sviluppate un programma in C per determinare se un cliente di un grande magazzino ha superato il limite di credito sul suo conto di addebito. Per ogni cliente sono
a disposizione i seguenti dati: 
    a) Numero del conto
    b) Saldo all'inizio del mese
    c) Totale delle voci addebitate sul conto del cliente nel mese
    d) Totale dei crediti applicati nel mese al conto del cliente
    e) Limite di credito concesso
Il programma deve leggere tali dati, calcolare il nuovo saldo (= saldo iniziale + addebiti - crediti) e determinare se il nuovo saldo supera ill limite di credito del 
cliente. Per quei clienti il cui limite di credito è stato superato, il programma deve stampare il numero del conto del cliente, il limite di credito, il nuovo saldo 
e il messaggio "Limite di credito superato." Ecco un esempio di dialogo di input/output: 
    
    Enter account number (-1 to end): 100
    Enter beginning balance: 5394.78
    Enter total charges: 1000.00
    Enter total credits: 5500.00
    Account:       100
    Credit limit:  5500.00
    Balance:       5894.78
    Credit limit exceeded.
    
    Enter account number (-1 to end): 200
    Enter beginning balance: 1000.00
    Enter total charges: 123.45
    Enter total credits: 321.00
    Enter credit limit: 1500.00
    
    Enter account number (-1 to end): 300
    Enter beginning balance: 500.00
    Enter total charges: 274.73
    Enter total credits: 100.00
    Enter credit limit: 800.00
    
    Enter account number (-1 to end): -1*/


    //Verifica del limite di credito
#include <stdio.h>

int main()
{
	unsigned int accountNumber = 0;
	float balance, charges, credits, creditLimit, newBalance;
	
	printf("%s", "Enter account number (-1 to end): ");
	scanf("%u", &accountNumber);

	while (accountNumber != -1) {

		printf("%s", "Enter beginning balance: ");
		scanf("%f", &balance);
		printf("%s", "Enter total charges: ");
		scanf("%f", &charges);
		printf("%s", "Enter total credits: ");
		scanf("%f", &credits);
		printf("%s", "Enter credit limit: ");
		scanf("%f", &creditLimit);

		newBalance = balance + charges - credits;

		if (newBalance > creditLimit) {
			printf("Account:\t%u\n", accountNumber);
			printf("Credit limit:\t%.2f\n", creditLimit);
			printf("Balance:\t%.2f\n", newBalance);
			printf("Credit Limit Exceeded.\n");
		}
		
		printf("%s", "\nEnter account number (-1 to end): ");
		scanf("%u", &accountNumber);

	}
}
