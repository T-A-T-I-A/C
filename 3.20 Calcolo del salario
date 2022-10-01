    //Calcolo del salario
#include <stdio.h>

int main()
{
	unsigned int hours = 0;
	float rate, salary = 0;

	printf("%s", "Enter # of hours worked(-1 to end): ");
	scanf("%u", &hours);

	while (hours != -1) {

		printf("%s", "Emter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);

		if (hours <= 40) {
			salary = hours * rate;
		}
		else if(hours > 40){
			salary = 40 * rate + (hours - 40) * (rate * 1.5);
		}

		printf("Salary is: %.2f\n", salary);
		puts("");

		printf("%s", "Enter # of hours worked(-1 to end): ");
		scanf("%u", &hours);
	}

	return 0;
}
    
