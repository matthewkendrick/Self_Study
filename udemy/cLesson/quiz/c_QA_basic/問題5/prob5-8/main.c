#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int data[5];
	int i, large = 0, small = 0, zero = 0;
	srand((unsigned)time(NULL));

	for (i = 0; i < 5; i++) {
		data[i] = rand() % 21 - 10;

		printf("%d ", data[i]);
		if (data[i] > 0) {
			large++;
		}
		else if (data[i] < 0)
		{
			small++;
		}
		else
		{
			zero++;
		}
	}

	printf("\n");

	printf("0‚æ‚è‘å‚«‚¢”:%dŒÂ\n", large);
	printf("0‚æ‚è¬‚³‚¢”:%dŒÂ\n", small);
	printf("0‚ÌŒÂ””:%dŒÂ\n", zero);
}