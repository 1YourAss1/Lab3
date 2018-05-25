#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main() {
	float eps;
	int n;
	printf("eps = ");
	scanf("%f", &eps);
	n = findFirstNegativeElement(eps);
	if (n != 0) {
		printf("%i \n", n);
	}
	else {
		printf("No Negative Elements");
	}

	_getch();
	return 0;
}