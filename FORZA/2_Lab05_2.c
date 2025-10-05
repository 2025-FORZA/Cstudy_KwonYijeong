#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);  // 1, 2, 3대 요금

    int time[101] = {0};  // 시간 단위별 트럭 수 기록 (최대 100)

    // 트럭 3대의 주차 시간 입력
    for (int i = 0; i < 3; i++) {
        int in, out;
        scanf("%d %d", &in, &out);
        for (int t = in; t < out; t++) {
            time[t]++;  // 해당 시간대에 트럭 1대 더 있음
        }
    }

    int total = 0;

    for (int i = 1; i <= 100; i++) {
        if (time[i] == 1)
            total += A;
        else if (time[i] == 2)
            total += 2 * B;
        else if (time[i] == 3)
            total += 3 * C;
    }

    printf("%d\n", total);
    return 0;
}