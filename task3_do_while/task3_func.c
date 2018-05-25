#include <math.h>

void print(int n, int k) {
	float a = 1;
	printf("%i  ", 0);
	printf("%f \n", a);
	int i = 1;
	do {
		a = a + pow((-1), i)*(pow(2, i + 1) / (pow(2, 2 * i) + 1));

		if (i % k == 0) {
			i++;
			continue;
		}
		printf("%i  ", i);
		printf("%f \n", a);
		i++;
	} while (i < 20);
}