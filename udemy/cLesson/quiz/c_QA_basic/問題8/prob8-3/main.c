#include <stdio.h>

void main()
{
	int num, i;
	int result = 1;

	printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		result = result * i;
	}

	printf("%d‚ÌŠKæ‚Í%d‚Å‚·B\n", num, result);
}