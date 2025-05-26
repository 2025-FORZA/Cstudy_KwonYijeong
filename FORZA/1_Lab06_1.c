#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	char num[101];

	scanf_s("%d", &n);
	scanf_s("%100s",num,101);

	for (int i = 0; i < n; i++) {
		sum = sum + num[i] - '0';
	}
	printf("%d\n", sum);
	return 0;
}