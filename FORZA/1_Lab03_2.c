#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);

	for (int b = 1; b <= 9; b++) {
		printf("%d * %d = %d\n", a, b, a * b);
	}
	return 0;
}

