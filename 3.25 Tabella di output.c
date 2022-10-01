#include <stdio.h>

int main()
{
	unsigned int counter = 1, a, a2, a4, a6;
	
	printf("A       A+2     A+4     A+6\n\n");

	while (counter <= 5) {

		a = counter * 3;
		a2 = a + 2;
		a4 = a + 4;
		a6 = a + 6;

		printf("%u\t%u\t%u\t%u\n", a, a2, a4, a6);
		++counter;
	}
}
