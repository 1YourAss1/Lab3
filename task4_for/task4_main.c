#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main() {
	float eps;
	int n;
	printf("eps = ");
	scanf("%f", &eps);
	n = findFirstElement(eps);
	printf("%i \n", n);
	_getch();
	return 0;
}