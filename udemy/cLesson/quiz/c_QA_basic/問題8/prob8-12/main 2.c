#include <stdio.h>

void main()
{
	int data[30];
	int n1 = 1, n2 = 1, n3 = 2, n4;
	int i = 0, max;

	printf("%d\n", n1);
	printf("%d\n", n2);

	while (n3 < 30)
	{
		data[i] = n3;

		n4 = n3 + n2 + n1;

		n1 = n2;
		n2 = n3;
		n3 = n4;
		i++;
	}

	max = i;
	for (i = 0; i < max; i++) {
		printf("%d\n", data[i]);
	}
}