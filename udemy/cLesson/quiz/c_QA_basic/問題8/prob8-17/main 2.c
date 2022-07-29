#include <stdio.h>

int fraternity(int);

void main()
{
	int i;
	int fraternityNum;
	for (i = 1; i < 10000; i++) {
		fraternityNum = fraternity(i);
		if (i == fraternity(fraternityNum) && i < fraternityNum) {
			printf("%d‚Æ%d‚Í—Fˆ¤”\n", i, fraternityNum);
		}
	}
}

int fraternity(int num)
{
	int n = 0;
	int i;
	for (i = 1; i * 2 <= num; i++) {
		if (num % i == 0 && num != i) {
			n += i;
		}
	}
	return n;
}