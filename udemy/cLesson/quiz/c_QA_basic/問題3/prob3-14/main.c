#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int a, b;
	srand((unsigned)time(NULL));
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	
	if (a > b) {
		printf("a‚Ì‚Ù‚¤‚ª‘å‚«‚¢‚Å‚·B\n");
	}
	else if (a < b) {
		printf("b‚Ì‚Ù‚¤‚ª‘å‚«‚¢‚Å‚·B\n");
	}
	else {
		printf("“™‚µ‚¢‚Å‚·B\n");
	}
}