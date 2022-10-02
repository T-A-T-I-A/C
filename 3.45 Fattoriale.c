#include <stdio.h>

int main()
{
	unsigned int x, fattoriale = 1;

	for (x = 1; x <= 5; x++) {
		fattoriale *= x;

		printf("%u! = %u\n", x, fattoriale);
	}

	return 0;
}
