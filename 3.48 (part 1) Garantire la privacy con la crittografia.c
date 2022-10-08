    //garantire la privacy con la cripttografia
#include <stdio.h>

int main()
{
	int x, a, b, c, d;

	printf("%s", "Inserisci un numero di quattro cifre: ");
	scanf("%d", &x);

	a = x / 1000 + 7;
	b = x % 1000 / 100 + 7;
	c = x % 1000 % 100 / 10 + 7;
	d = x % 1000 % 100 % 10  + 7;


	a = a % 10;
	b = b % 10;
	c = c % 10;
	d = d % 10;

	printf("%d%d%d%d\n", c, d, a, b);
}
