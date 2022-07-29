#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int n, i;
	char c = ' ';
	srand((unsigned)time(NULL));
	n = rand() % 99 + 2;

	printf("%d =", n);
	for (i = 2; n != 1; i++) {
		while (n % i == 0)
		{
			n = n / i;
			printf("%c%d", c, i);
			c = '*';
		}
	}

	printf("\n");
}