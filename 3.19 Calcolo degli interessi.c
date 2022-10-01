#include <stdio.h>

int main()
{
	float principal, rate, interest = 0;
	unsigned int days;

	printf("%s", "Enter loan principal(-1 to end): ");
	scanf("%f", &principal);

	while (principal != -1) {

		printf("%s", "Enter interest rate: ");
		scanf("%f", &rate);
		printf("%s", "Enter term of the loan in days: ");
		scanf("%u", &days);
		
		interest = principal * rate * days / 365;
		printf("The interest charge is: %.2f\n", interest);

		puts("");
		printf("%s", "Enter loan principal(-1 to end): ");
		scanf("%f", &principal);
	}

	return 0;
}
    
