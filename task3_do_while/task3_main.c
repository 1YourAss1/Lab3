#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"

int main() {
	int n, k;
	printf("n = ");
	scanf("%i", &n);
	printf("k = ");
	scanf("%i", &k);
	print(n, k);
	_getch();
	return 0;
}