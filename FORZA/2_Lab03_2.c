#include <stdio.h>
int main(void) {
	int a, b, c;
	int num;
	int count[10] = {0};

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	num = a * b * c;

	while (num > 0) {
		count[num % 10]++;
		num = num / 10;
	}
	int i = 0;
	while (i < 10) {
		printf("%d\n", count[i]);
		i++;
	}

	return 0;

}