#include<stdio.h>
int main() {
	int N, F;
	if (scanf_s("%d %d", &N, &F) != 2) 
		return 0;

	N = (N / 100) * 100;

	for (int i = 0; i < 100; i++) {
		if ((N + i) % F == 0) {
			printf("%02d\n", i);
			break;
		}

	}
	return 0;
}