    //Quadrato di asterischi
#include <stdio.h>

int main()
{
	unsigned int x, counter, count;

	printf("Inserishi il numero (da 1  20): ");
	scanf("%u", &x);

	counter = x;

	while (x >= 1) {
		count = 1;


		while (count <= counter) {
			if ((x == 1) || (x == counter) || (count == 1) || (count == counter)) {
				printf("*");
			}
			else {
				printf(" ");
			}
			++count;
		}

		puts("");
		--x;
	}
}
