    #include <stdio.h>

int main()
{
	unsigned int a, b, c, d, e, x;

	printf("%s", "Inserisci un numero di cinque cifre : ");
	scanf("%u", &x);

	a = x / 10000;
	b = x % 10000 / 1000;
	c = x % 10000 % 1000 / 100;
	d = x % 10000 % 1000 % 100 / 10;
	e = x % 10000 % 1000 % 100 % 10;
	printf("%u\t%u\t%u\t%u\t%u\n", a, b, c, d, e);

	if ((a == e) && (b == d)) {
		printf("Il numero inserito e' palindromo\n");
	}
	else {
		printf("Il numero inserito non e' palindromo\n");
	}
}
