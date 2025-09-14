#include <stdio.h>

int main(void) {
	int n, a;
	int min, max;

	scanf_s("%d", &n);
	scanf_s("%d", &a);

	min = max = a;

	for (int i = 1; i < n; i++) {
		scanf_s("%d", &a);
		if (a < min) {
			min = a;
		}
		else if (a > max) {
			max = a;
		}
		printf("%d %d", min, max);
		return 0;
	}

		

}