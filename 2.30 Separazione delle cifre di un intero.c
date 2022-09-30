    //separa cinque cifre di un numero intero
#include <stdio.h>

int main()
{
	int x;

	printf("Inserisci un numero intero di cinque cifre:\n");
	scanf("%d", &x);

	printf("%d\t", x / 10000);
	
	int resto = x % 10000;
	printf("%d\t", resto / 1000);

	int a = resto % 1000;
	printf("%d\t", a / 100);

	int b = a % 100;
	printf("%d\t", b / 10);

	int c = b % 10;
	printf("%d\t", c);

}
    
