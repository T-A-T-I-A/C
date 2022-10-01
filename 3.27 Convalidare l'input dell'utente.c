    //convalidare l'input dell'utente
#include <stdio.h>

int main()
{
	unsigned int passes = 0, failures = 0, student = 1;
	int result;

	while (student <= 10) {

		printf("%s", "Enter result (1=pass, 2=fail): ");
		scanf("%u", &result);

		if (result == 1) {
			passes = passes + 1;
		}
		if (result == 2) {
			failures = failures + 1;
		}

		student = student + 1;
		if (result > 2 || result < 1) {
		    printf("Inserisci numero valido\n\n");
			student = student - 1;
		}
	}

	printf("Passed %u\n", passes);
	printf("Failed %u\n", failures);

	if (passes > 8) {
		puts("Bonus to instructor!");
	}
}
