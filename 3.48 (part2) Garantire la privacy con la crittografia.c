    //decripra il programma di cripttografia
#include <stdio.h>

int main()
{
	int x, c, d, a, b;

	printf("%s", "Inserisci un numero di 4 cifre: ");
	scanf("%d", &x);

	c = x / 1000;
	d = x % 1000 / 100;
	a = x % 1000 % 100 / 10;
	b = x % 1000 % 100 % 10;


	if (a < 7 ) {
		a = a + 10;
	}
	if (b < 7) {
		b = b + 10;
	}
	if (c < 7) {
		c = c + 10;
	}
	if (d < 7) {
		d = d + 10;
	}

	a = a - 7;
	b = b - 7;
	c = c - 7;
	d = d - 7;

	printf("%d%d%d%d\n", a, b, c, d);

	return 0;
}
