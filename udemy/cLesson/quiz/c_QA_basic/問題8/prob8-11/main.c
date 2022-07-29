#include <stdio.h>

void main()
{
	int data[40];
	int n1, n2, n3;
	int i = 0, max;
	n1 = 1;
	n2 = 1;

	printf("%d\n", n1);


	while (n2 < 40)
	{
		data[i] = n2;
		n3 = n2 + n1;

		n1 = n2;
		n2 = n3;
		i++;
	}

	max = i;
	for (i = 0; i < max; i++) {
		printf("%d\n", data[i]);
	}
}