//determina se tra due interi, il primo e' un multiplo del secondo
#include <stdio.h>

//la funzione main inizia esecuzione
int main()
{
	int x, y;

	printf("Inserisci due interi:\n");
	scanf("%d%d", &x, &y);

	if (x % y == 0) {
		printf("%d e' un multiplo di %d\n", x, y);
	}
	else
	{
		printf("%d non e' un multiplo di %d\n", x, y);
	}

	return 0;
}
