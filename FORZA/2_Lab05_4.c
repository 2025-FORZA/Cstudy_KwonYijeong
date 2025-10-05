#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // 측정된 지점 수

    int height[1001];
    for (int i = 0; i < N; i++) {
        scanf("%d", &height[i]);  // 각 지점의 고도 입력
    }

    int max_up = 0;     // 최대 오르막길 높이 차이 저장
    int current = 0;    // 현재 오르막길 누적 합

    for (int i = 1; i < N; i++) {
        if (height[i] > height[i - 1]) {
            // 오르막길인 경우
            current += height[i] - height[i - 1];
        } else {
            // 내리막길 시작 → 지금까지의 오르막 마무리
            if (current > max_up)
                max_up = current;
            current = 0;  // 오르막 초기화
        }
    }

    // 마지막 오르막길 처리 (끝나기 전에 끝났을 수도 있으므로)
    if (current > max_up)
        max_up = current;

    printf("%d\n", max_up);
    return 0;
}