#include <stdio.h>

int main()
{
	int x = 1;

	while (x <= 100) {
		if (x % 10 == 0) {
			printf("\\n");
		}
		printf("*");
		++x;
	}
}
