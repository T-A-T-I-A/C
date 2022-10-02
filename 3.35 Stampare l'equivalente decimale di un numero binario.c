    #include <stdio.h>

int main()
{
	int x, a, b, c, d, e;

	printf("%s", "Inserisci un numero binario di 5 cifre: ");
	scanf("%d", &x);

	a = x / 10000 * 16;
	b = x % 10000 / 1000 * 8;
	c = x % 10000 % 1000 / 100 * 4;
	d = x % 10000 % 1000 % 100 / 10 * 2;
	e = x % 10000 % 1000 % 100 % 10;

	int sum = a + b + c + d + e;

	printf("Equivalente decimale del binario %d e' %d\n", x, sum);
}
