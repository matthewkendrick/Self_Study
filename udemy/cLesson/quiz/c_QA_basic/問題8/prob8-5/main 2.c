#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, num, digit = 0;
	for (i = 1; i <= 100; i++) {
		num = i;
		while (num != 0)
		{
			num = num / 10;
			digit++;
		}

		if (digit == 1) {
			if (i % 3 == 0) {
				printf("%d\n", i);
			}
		} else {
			if (i % 3 == 0 || i % 10 == 3 || (i / 10) == 3) {
				printf("%d\n", i);
			}
		}
		digit = 0;
	}
}