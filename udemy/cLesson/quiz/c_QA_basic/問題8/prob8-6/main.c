#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gcd(int x, int y);
int lcm(int x, int y);

void main()
{
	int denominator1, denominator2, numerator1, numerator2;
	int resultDenominator, resultNumerator;
	int n1;

	srand((unsigned)time(NULL));
	denominator1 = rand() % 9 + 2;
	numerator1 = rand() % 10 + 1;
	denominator2 = rand() % 9 + 2;
	numerator2 = rand() % 10 + 1;
	
	resultDenominator = lcm(denominator1, denominator2);
	printf("%d/%d + %d/%d = ", numerator1, denominator1, numerator2, denominator2);

	if (denominator1 != resultDenominator) {
		numerator1 = numerator1 * (resultDenominator / denominator1);
	}
	if (denominator2 != resultDenominator) {
		numerator2 = numerator2 * (resultDenominator / denominator2);
	}

	resultNumerator = numerator1 + numerator2;
	n1 =gcd(resultNumerator, resultDenominator);
	
	resultDenominator = resultDenominator / n1;
	resultNumerator = resultNumerator / n1;

	if (resultNumerator % resultDenominator == 0) {
		printf("%d\n", resultNumerator / resultDenominator);
	} else if(resultNumerator > resultDenominator) {
		printf("%d.%d/%d\n", resultNumerator / resultDenominator, resultNumerator % resultDenominator, resultDenominator);
	} else {
		printf("%d/%d\n", resultNumerator, resultDenominator);
	}
	
}

int gcd(int x, int y) {
	int r;
	while ((r = x % y) != 0) {
		x = y;
		y = r;
	}
	return y;
}


int lcm(int x, int y) {
	return ((x * y) / gcd(x, y));
}