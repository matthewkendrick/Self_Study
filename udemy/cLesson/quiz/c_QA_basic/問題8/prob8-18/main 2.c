#include <stdio.h>

void main()
{
	int data[50];
	int i, j, cnt = 0;

	for (i = 0; i < 50; i++) {
		data[i] = 1;
	}

	for (i = 1; i <= 50; i++) {
		for (j = 1; j <= 50; j++) {
			if (j % i == 0) {
				data[j - 1] = data[j - 1] * -1;
			}
		}
	}

	for (i = 0; i < 50; i++) {
		if (data[i] == -1) {
			cnt++;
		}
	}

	printf("開いているロッカーは%d個です\n", cnt);
}