    //Quadrato di asterischi
#include <stdio.h>

int main()
{
	unsigned int x, counter, count;

	printf("Inserishi il numero (da 1 a 20): ");
	scanf("%u", &x);

	counter = x;

	while (x >= 1) {
		count = 1;

		while (count <= counter) {
			printf("*");
			++count;
		}

		puts("");
		--x;
	}
}
