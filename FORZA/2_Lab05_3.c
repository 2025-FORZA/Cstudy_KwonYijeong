#include <stdio.h>

int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == -1) break; // 입력 종료
		
		int sum = 0; // 약수 합
		int divisors[1000]; // 약수 저장 배열
		int count = 0; // 약수 개수
		
		// 1부터 n-1까지 반복하면서 약수를 찾는다
		for (int i = 1; i < n; i++) {
			if (n % i == 0) { // 나누어 떨어지면 약수
				sum += i; // 합계에 추가
				divisors[count++] = i; // 배열에 저장
			}
		}
		
		if (sum == n) {
			// 완전수일 경우 출력
			printf("%d = %d", n, divisors[0]);
			for (int i = 1; i < count; i++) {
				printf(" + %d", divisors[i]);
			}
			printf("\n");
		} else {
			// 완전수가 아닐 경우
			printf("%d is NOT perfect.\n", n);
		}
	}
	return 0;
}