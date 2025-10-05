#include <stdio.h>

int main() {
	int N, k;
	scanf("%d %d", &N, &k);
	
	int a[1000];
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	
	// 내림차순으로 정렬 (큰 수 -> 작은 수)
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (a[j] < a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	printf("%d\n", a[k - 1]);
	return 0;
}