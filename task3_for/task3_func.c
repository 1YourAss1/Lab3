#include <math.h>

void print(int n, int k) {
	float a = 1;
	printf("%i  ", 0);
	printf("%f \n", a);
	for (int i = 1; i < n; i++) {
		a = a + pow((-1), i)*(pow(2, i + 1) / (pow(2, 2 * i) + 1));
		if (i%k == 0)
			continue;
		printf("%i  ", i);
		printf("%f \n", a);
	}
}