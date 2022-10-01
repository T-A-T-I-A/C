#include <stdio.h>

int main()
{
	unsigned int number, max1 = 0, max2 = 0;
	int counter = 1;

	while (counter <= 10) {

		printf("%s", "Enter the number: ");
		scanf("%u", &number);

		if (number > max2) {
			max1 = max2;
			max2 = number;
		}
		else if (number > max1) {
			max1 = number;
		}

		++counter;
	}

	printf("Maximum1:\t%u\nMaximum2:\t%u\n", max1, max2);
}
