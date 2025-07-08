
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num, min, max;

    scanf("%d", &num); // 첫 번째 수 입력
    min = max = num;   // min과 max 초기화

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num < min) min = num;
        if (num > max) max = num;
    }

    printf("%d %d\n", min, max);
    return 0;
}
