    #include <stdio.h>

int main()
{
	unsigned int x = 1;

	while (x <= 1000000000) {
		if (x % 100000000 == 0) {
			printf("%u\n", x);
		}
		++x;
	}
}
